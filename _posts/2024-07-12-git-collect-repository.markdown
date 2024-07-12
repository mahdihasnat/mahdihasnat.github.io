---
layout: post
title:  "Collect multiple git repo into a single repo"
date:   2024-07-12 20:29:32 +0600
categories: git
---
During my undergraduate studies, I created new git repository for almost every term. In the git repository I tracked my assignments, projects, and notes.
But now I feel like I should have created a single repository for all my univarsity works.

So I want to collect my all git repositoy into a single repository.
I want to edit history so that it seems I worked on the single repository from the very begining.
Say my repositories are `repo1` and `repo2`.
Now my new `repo` will contain two folder `repo1` and `repo2`.
New git history will be like all my `repo1` commits but files will be in `repo1` folder and same for `repo2`.

After a little bit of chatgpt, I found that git subtree does something like that. Git subtree seems clone all the commit preserving the history and commit-hash. Then it just add a merge like commit to the new repository.

But I want to preserve linear history (with the cost of destroying commit hash and possible some github verified commit).

I don't yet know how to do that. But I will update this post when I find a way to do that.

Stay tuned!