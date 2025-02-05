git checkout -- <filename>

// You modified a file (file.txt) but haven’t staged or committed or added it yet. Now, you want to discard those changes and restore the last committed version.

// Revert unstaged changes in a file.

git revert <revert_id>
// is a safe way to undo a commit without modifying the commit history. 
// If you simply delete or edit earlier changes and commit, you're modifying history and losing the context of those changes.

// If you try to manually edit files and push, it might create conflicts with the current state of the repository. git revert handles this by adding a new commit instead of trying to modify history.

// Others can see that a commit was reverted, making collaboration smoother.

// Adds a new commit (reverts previous changes)
// Undo a commit without rewriting history

