# My Works

A hands-on learning repository for experiments, exercises, and small projects created while studying modern web development, backend development, C++, CSS, and React Native.

The code here is intentionally organized by topic and course progression. It is a study workspace, not one deployable application.

## Contents

- [Repository map](#repository-map)
- [Learning areas](#learning-areas)
- [Getting started](#getting-started)
- [Working conventions](#working-conventions)

## Repository map

| Directory | Purpose |
| --- | --- |
| `Animation in CSS` | Standalone HTML and CSS animation exercises |
| `Learning Angular` | Angular application practice |
| `Learning Backend` | Node.js and Express learning parts |
| `Learning C++` | C++ language and data-structure exercises |
| `Learning Next.js` | Next.js routing and application experiments |
| `Learning ReactJS` | Incremental React and Vite exercises |
| `React-Native` | Expo and React Native practice app |

Empty placeholder folders such as `data`, `projects`, and `Learning Typescript` are kept for future exercises.

## Learning areas

Each area contains self-contained exercises, so its dependencies and commands live with the relevant project.

### CSS animation

`Animation in CSS` contains a small browser-based animation exercise. Open `index.html` directly in a browser to view it.

### C++

`Learning C++` covers language fundamentals such as arrays, pointers, structures, unions, and enums. The `DSA` folder extends that work with lecture-based data-structure and algorithm exercises.

### Angular

`Learning Angular/my-app` is an Angular application used to practice the framework's application structure, routing, styles, and tests.

### Backend

`Learning Backend` is split into `Part-1`, `Part-2`, and `Part-3` to preserve the progression of the Node.js and Express lessons. The later part also includes application and database modules under `src`.

### React

`Learning ReactJS` is arranged as numbered Vite projects. Topics include components, props, card layouts, CSS, Tailwind CSS, UI work, and functions.

### Next.js

`Learning Next.js` contains two applications. `my-app` uses the App Router, while `my-app2` provides Pages Router examples, including dynamic product routes.

### React Native

`React-Native/my-app` is an Expo application with tab screens, a modal screen, theming helpers, and camera-related practice.

## Getting started

1. Clone this repository.
2. Change into the specific project directory you want to explore.
3. Install that project's dependencies with `npm install` when it has a `package.json`.
4. Use the relevant command below.

There is no root-level install or run command because the folders are independent learning projects.

### Angular commands

From `Learning Angular/my-app`, use:

```bash
npm start
```

Run `npm run build` to produce a production build or `npm test` to run its test suite.

### React commands

Each numbered project under `Learning ReactJS` uses Vite. From a chosen project folder, run:

```bash
npm run dev
```

`npm run build`, `npm run lint`, and `npm run preview` are also available in these projects.

### Next.js commands

From either application in `Learning Next.js`, run:

```bash
npm run dev
```

Use `npm run build` to check a production build, `npm start` to serve it, and `npm run lint` for linting.

### React Native commands

From `React-Native/my-app`, start Expo with:

```bash
npm start
```

The project also provides `npm run android`, `npm run ios`, `npm run web`, and `npm run lint`.
