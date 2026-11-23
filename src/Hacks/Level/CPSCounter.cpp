#include "../../Client/Module.hpp"
#include <Geode/modify/GJBaseGameLayer.hpp>
#include <chrono>

using namespace geode::prelude;

class CPSCounter : public Module
{
public:
    MODULE_SETUP(CPSCounter)
    {
        setName("CPS Counter");
        setID("cps-counter");
        setCategory("Level");
        setDescription("Displays your real-time Clicks Per Second (CPS) on screen");
    }
};

SUBMIT_HACK(CPSCounter)

class $modify (CPSGameLayer, GJBaseGameLayer)
{
    struct Fields {
        CCLabelBMFont* cpsLabel = nullptr;
        std::vector<std::chrono::steady_clock::time_point> clicks = {};
    };

    bool init()
    {
        if (!GJBaseGameLayer::init())
            return false;

        auto winSize = CCDirector::get()->getWinSize();
        m_fields->cpsLabel = CCLabelBMFont::create("0 CPS", "bigFont.fnt");
        if (m_fields->cpsLabel)
        {
            m_fields->cpsLabel->setScale(0.4f);
            m_fields->cpsLabel->setOpacity(180);
            m_fields->cpsLabel->setPosition(ccp(winSize.width - 50.0f, winSize.height - 20.0f));
            m_fields->cpsLabel->setZOrder(1000);
            m_fields->cpsLabel->setVisible(CPSCounter::get()->getRealEnabled());
            this->addChild(m_fields->cpsLabel);
        }

        return true;
    }

    void handleButton(bool down, int button, bool isPlayer2)
    {
        GJBaseGameLayer::handleButton(down, button, isPlayer2);

        if (down && CPSCounter::get()->getRealEnabled() && m_fields->cpsLabel)
        {
            auto now = std::chrono::steady_clock::now();
            m_fields->clicks.push_back(now);
            
            // Prune clicks older than 1 second
            while (!m_fields->clicks.empty() && 
                   std::chrono::duration_cast<std::chrono::milliseconds>(now - m_fields->clicks.front()).count() > 1000)
            {
                m_fields->clicks.erase(m_fields->clicks.begin());
            }

            m_fields->cpsLabel->setString(fmt::format("{} CPS", m_fields->clicks.size()).c_str());
            m_fields->cpsLabel->setVisible(true);
        }
    }

    void update(float dt)
    {
        GJBaseGameLayer::update(dt);

        if (CPSCounter::get()->getRealEnabled() && m_fields->cpsLabel)
        {
            auto now = std::chrono::steady_clock::now();
            bool changed = false;
            while (!m_fields->clicks.empty() && 
                   std::chrono::duration_cast<std::chrono::milliseconds>(now - m_fields->clicks.front()).count() > 1000)
            {
                m_fields->clicks.erase(m_fields->clicks.begin());
                changed = true;
            }
            if (changed)
            {
                m_fields->cpsLabel->setString(fmt::format("{} CPS", m_fields->clicks.size()).c_str());
            }
        }
    }
};
