const profile = {
  name: "Mohammad Hafizur Rahman Sakib",
  title: "Full-Stack Developer",
  skills: [
    "React",
    "Next.js",
    "Node.js",
    "MongoDB",
    "Docker",
    "AWS",
    "TypeScript",
    "GraphQL",
  ],
  competitive: {
    codeforces: "Pupil | 1200+",
    leetcode: "1532 Rating",
    solved: "550+ Problems",
  },
  hardWorker: true,
  quickLearner: true,
  hireable: () => true,
};

console.log(`
Name: ${profile.name}
Title: ${profile.title}
Skills: ${profile.skills.join(", ")}

Codeforces: ${profile.competitive.codeforces}
LeetCode: ${profile.competitive.leetcode}
Problems Solved: ${profile.competitive.solved}

Hard Worker: ${profile.hardWorker}
Quick Learner: ${profile.quickLearner}
Hireable: ${profile.hireable()}
`);
