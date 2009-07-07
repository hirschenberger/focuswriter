/***********************************************************************
 *
 * Copyright (C) 2008-2009 Graeme Gott <graeme@gottcode.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 ***********************************************************************/

#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <QStringList>
class Dictionary;

class Preferences {
public:
	Preferences();
	~Preferences();

	int goalType() const;
	int goalMinutes() const;
	int goalWords() const;
	void setGoalType(int goal);
	void setGoalMinutes(int goal);
	void setGoalWords(int goal);

	bool showCharacters() const;
	bool showPages() const;
	bool showParagraphs() const;
	bool showWords() const;
	void setShowCharacters(bool show);
	void setShowPages(bool show);
	void setShowParagraphs(bool show);
	void setShowWords(bool show);

	bool alwaysCenter() const;
	bool blockCursor() const;
	void setAlwaysCenter(bool center);
	void setBlockCursor(bool block);

	bool autoSave() const;
	bool autoAppend() const;
	void setAutoSave(bool save);
	void setAutoAppend(bool append);

	int toolbarStyle() const;
	QStringList toolbarActions() const;
	void setToolbarStyle(int style);
	void setToolbarActions(const QStringList& actions);

	bool highlightMisspelled() const;
	bool ignoredWordsWithNumbers() const;
	bool ignoredUppercaseWords() const;
	QString language() const;
	void setHighlightMisspelled(bool highlight);
	void setIgnoreWordsWithNumbers(bool ignore);
	void setIgnoreUppercaseWords(bool ignore);
	void setLanguage(const QString& language);

private:
	int m_goal_type;
	int m_goal_minutes;
	int m_goal_words;

	bool m_show_characters;
	bool m_show_pages;
	bool m_show_paragraphs;
	bool m_show_words;

	bool m_always_center;
	bool m_block_cursor;

	bool m_auto_save;
	bool m_auto_append;

	int m_toolbar_style;
	QStringList m_toolbar_actions;

	bool m_highlight_misspelled;
	bool m_ignore_uppercase;
	bool m_ignore_numbers;
	QString m_language;
	Dictionary* m_dictionary;

	bool m_changed;
};

#endif
