# Untold Story: Sun and Moon – A Reimagined Vietnamese Mythology

[![Unreal Engine](https://img.shields.io/badge/Unreal%20Engine-5.0+-313131?style=flat&logo=unrealengine)](https://www.unrealengine.com/)
[![NVIDIA ACE](https://img.shields.io/badge/NVIDIA-ACE-76B900?style=flat&logo=nvidia)](https://www.nvidia.com/en-us/ai/)
[![License](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/Platform-Windows-0078D6?style=flat&logo=windows)](https://www.microsoft.com/windows)

A Soulslike action game that reimagines Vietnamese mythology through the lens of modern game development, featuring adaptive AI-powered NPCs using NVIDIA ACE technology.

## 📖 Overview

**Untold Story: Sun and Moon** is a graduation project that transforms the Vietnamese fairy tale "The Sun and Moon Goddesses" into a dark fantasy action game. Set centuries after the original tale, players navigate a world trapped in eternal darkness, battling corrupted beings and confronting the Moon Goddess herself.

This vertical slice demo showcases:
- High-quality 3D combat mechanics inspired by the Soulslike genre
- Cinematic cutscenes with Vietnamese cultural aesthetics
- Adaptive NPC behavior powered by NVIDIA ACE
- Traditional Vietnamese architectural and mythological elements

## ✨ Key Features

### 🎮 Gameplay
- **Soulslike Combat System**: Precision-based melee combat with dodge, parry, and counterattack mechanics
- **Light Manipulation**: Use solar energy to reveal hidden paths and weaken shadow enemies
- **Boss Fight**: Multi-phase encounter with the Moon Goddess featuring dynamic behavior adaptation

### 🤖 AI Innovation
- **NVIDIA ACE Integration**: NPCs that learn and adapt to player strategies
- **Dynamic Boss Behavior**: The Moon Goddess adjusts tactics based on player combat patterns
- **Contextual Dialogue**: AI-driven emotional responses that evolve throughout the battle

### 🎨 Visual & Narrative
- **Vietnamese Cultural Heritage**: Architecture, costumes, and mythology authentically reimagined
- **Cinematic Presentation**: High-quality cutscenes with motion-captured animations
- **Environmental Storytelling**: Discover the world's tragic history through collectible memory fragments

## 🛠️ Technical Stack

- **Game Engine**: Unreal Engine 5
  - Lumen Global Illumination
  - Nanite Virtualized Geometry
- **Programming**: C++ & Blueprint Visual Scripting
- **AI Framework**: NVIDIA ACE Plugin
- **Target Platform**: Windows PC
- **Development Methodology**: Agile (Scrum)

## 🎯 Project Scope

This demo represents a **Vertical Slice** - a complete, polished segment showcasing all core systems:

- ✅ Opening cinematic sequence
- ✅ Village exploration with basic enemy encounters
- ✅ Mini-boss encounter
- ✅ Full boss fight with 3 adaptive phases
- ✅ Multiple interwoven cinematics
- ✅ Closing narrative resolution

## 🎬 Story Synopsis

Centuries after the hero Quải threw sand at the Moon Goddess to protect farmers, the world has changed. Instead of becoming gentle, the Moon Goddess harbored resentment against humanity. She secretly usurped power in the Celestial Realm, using her light to eclipse her sister the Sun, plunging the world into eternal darkness. This darkness drove some mortals mad, transforming them into twisted monsters.

You play as **Hạo**, a descendant of Quải, blessed by the Sun Goddess with the power to challenge the Moon and restore the natural order of the universe.

## 👥 Team

**Vietnam-Korea University of Information and Communication Technology**

- **Doãn Cát Phú** (21IT036) - Lead Programmer & AI Specialist
- **Nguyễn Lê Tất Phú** (21IT037) - Lead Artist & Level Designer

**Advisor**: Dr. Nguyễn Hữu Nhật Minh

## 📋 Project Structure

```
UntoldStory/
├── Content/
│   ├── Characters/        # Player, NPCs, and enemy models
│   ├── Environments/      # Levels and environment assets
│   ├── Animations/        # Character animations and cutscenes
│   ├── AI/               # NVIDIA ACE integration and behavior trees
│   ├── UI/               # User interface elements
│   └── Cinematics/       # Cutscene sequences
├── Source/
│   ├── Combat/           # Combat system implementation
│   ├── AI/               # AI controller and behavior logic
│   └── Player/           # Player controller and mechanics
└── Plugins/
    └── NVIDIAAce/        # NVIDIA ACE plugin integration
```

## 🚀 Getting Started

### Prerequisites

- Unreal Engine 5.0 or later
- Windows 10/11 (64-bit)
- NVIDIA GPU (RTX 2060 or higher recommended for ACE features)
- Visual Studio 2019 or later
- Minimum 16GB RAM
- 50GB available storage

### Installation

1. Clone the repository:
```bash
git clone https://github.com/yourusername/untold-story-sun-moon.git
```

2. Navigate to the project directory:
```bash
cd untold-story-sun-moon
```

3. Right-click on `UntoldStory.uproject` and select "Generate Visual Studio project files"

4. Open `UntoldStory.sln` in Visual Studio

5. Build the project (Development Editor configuration)

6. Launch the project through Unreal Engine

### Running the Demo

1. Open the project in Unreal Engine
2. Navigate to `Content/Maps/VerticalSlice_Demo`
3. Click Play or press Alt+P

## 🎮 Controls

| Action | Key Binding |
|--------|-------------|
| Move | WASD |
| Camera | Mouse |
| Light Attack | Left Mouse Button |
| Heavy Attack | Right Mouse Button |
| Dodge Roll | Spacebar |
| Block/Parry | Shift |
| Solar Burst | Q |
| Interact | E |

## 📊 Development Roadmap

### Phase 1: Research & Foundation (Aug 5 - Sep 2, 2025) ✅
- Unreal Engine 5 and NVIDIA ACE research
- Technical documentation review

### Phase 2: Narrative Design (Sep 3 - Sep 8, 2025) ✅
- Vietnamese mythology research
- Game script development

### Phase 3: Prototyping (Sep 9 - Sep 16, 2025) ✅
- Grey-box environment creation
- Basic 3D models

### Phase 4: Core Mechanics (Sep 17 - Oct 17, 2025) ✅
- Movement and combat system implementation
- State machine architecture

### Phase 5: Asset Creation (Oct 17 - Nov 24, 2025) 🔄
- Character and environment modeling
- Animation and rigging
- NVIDIA ACE integration

### Phase 6: Polish (Nov 25 - Dec 10, 2025) 📋
- AI refinement
- VFX and SFX implementation
- Cutscene production
- UI/UX design

### Phase 7: Testing & Finalization (Dec 11 - Dec 27, 2025) 📋
- Comprehensive testing
- Performance optimization
- Final report and presentation preparation

## 🔬 Research Contributions

### Scientific Significance
- Case study on implementing NVIDIA ACE in a real game product
- Methodology for transforming intangible cultural heritage into interactive digital experiences
- Reference documentation for AI model integration in Unreal Engine 5

### Practical Significance
- Cultural promotion of Vietnamese mythology to younger generations
- Educational resource for game development students
- Potential commercial game prototype

## 📝 Documentation

For detailed documentation, please refer to:
- [Design Document](docs/DESIGN.md)
- [Technical Specification](docs/TECHNICAL.md)
- [AI Implementation Guide](docs/AI_GUIDE.md)
- [Art Style Guide](docs/ART_GUIDE.md)

## 🐛 Known Issues

- NVIDIA ACE features require RTX-capable GPU
- Some cutscene transitions may experience brief loading
- Performance optimization ongoing for complex shadow calculations

## 🤝 Contributing

This is an academic project for graduation requirements. While we appreciate interest, we are not accepting external contributions at this time.

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- **NVIDIA** for the ACE technology and documentation
- **Epic Games** for Unreal Engine 5
- **Vietnamese Cultural Heritage** for inspiration
- **Dr. Nguyễn Hữu Nhật Minh** for academic guidance
- **Vietnam-Korea University of ICT** for institutional support

## 📧 Contact

For inquiries about this project:

- **Project Email**: untoldstory.sunmoon@gmail.com
- **University**: Vietnam-Korea University of Information and Communication Technology
- **Department**: Computer Science

## 🌟 Showcase

[Gameplay trailer and screenshots will be added upon completion]

---

**Note**: This is a student graduation project developed for educational purposes. All cultural references are made with respect to Vietnamese heritage and mythology.

**Project Status**: 🔄 In Active Development (Expected completion: December 2025)