#pragma once
#include <iostream>
#include <stdio.h>

enum Genre {
	Rock,
	HipHop,
	Classic,
	Pop
};

class Song {
public:
	void SetName(string name) {
		Name = name;
	}
	void SetDuration(int duration) {
		if (!duration)
		{
			throw exception("Negtive or null number");
		}
		Duration = duration;
	}
	void SetSongGenre(Genre songGenre) {
		SongGenre = songGenre;
	}

	string GetName() {
		return Name;
	}
	int GetDuration() {
		return Duration;
	}
	Genre GetSongGenre() {
		return SongGenre;
	}

	Song(string name = "", int duration = 1, Genre songGenre = Rock) {
		SetName(name);
		SetDuration(duration);
		SetSongGenre(songGenre);
	}
private:
	string Name;
	int Duration;
	Genre SongGenre;
};

class Album
{
public:
	string GetName() {
		return Name;
	};
	int GetYear() {
		return Year;
	}
	int GetSongCount() {
		return SongCount;
	}
	Song* GetSongs() {
		return Songs;
	}

	void SetName(string name) {
		Name = name;
	};
	void SetYear(int year) {
		if (year < 0)
		{
			throw exception("Negtive or null number");
		}
		Year = year;
	}
	void SetSongs(Song* songs, int length) {
		SongCount = length;
		for (int i = 0; i < length; i++)
		{
			Songs[i] = songs[i];
		}
	}

	Album(string name = "", int year = 0, int songCount = 0, Song* songs = {}) {
		SetName(name);
		SetYear(year);
		SetSongs(songs, songCount);
	};

private:
	string Name;
	int Year;
	int SongCount;
	Song* Songs;
};

class Band
{
public:
	string GetName() {
		return Name;
	};
	string GetMiscInfo() {
		return MiscInfo;
	}
	int GetAlbumCount() {
		return AlbumCount;
	}
	Album* GetAlbums() {
		return Albums;
	}

	void SetName(string name) {
		Name = name;
	};
	void SetMiscInfo(string miscInfo) {
		MiscInfo = miscInfo;
	}
	void SetAlbums(Album* songs, int songCount) {
		AlbumCount = songCount;
		for (int i = 0; i < 2; i++)
		{
			Albums[i] = songs[i];
		}
	}

	Band(string name, string miscInfo, int songCount, Album* songs) {
		SetName(name);
		SetMiscInfo(miscInfo);
		SetAlbums(songs, songCount);
	};


	Song* GetAllGenreSongs(int& allSongsCount, Genre findingGenre) {
		allSongsCount = 0;
		int counter = 0;
		for (int i = 0; i < GetAlbumCount(); i++)
		{
			for (int j = 0; j < GetAlbums()[i].GetSongCount(); j++)
			{
				allSongsCount++;
			}
		}
		Song* retval = new Song[allSongsCount];
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < GetAlbums()[i].GetSongCount(); j++)
			{
				if (GetAlbums()[i].GetSongs()[j].GetSongGenre() == findingGenre)
				{
					retval[counter] = GetAlbums()[i].GetSongs()[j];
					counter++;
				}
			}
		}
		allSongsCount = counter;
		return retval;
	}

	Song* GetAllSongs(int& allSongsCount) {
		allSongsCount = 0;
		int counter = 0;
		for (int i = 0; i < GetAlbumCount(); i++)
		{
			for (int j = 0; j < GetAlbums()[i].GetSongCount(); j++)
			{
				allSongsCount++;
			}
		}
		Song* retval = new Song[allSongsCount];
		for (int i = 0; i < GetAlbumCount(); i++)
		{
			for (int j = 0; j < GetAlbums()[i].GetSongCount(); j++)
			{
				retval[counter] = GetAlbums()[i].GetSongs()[j];
				counter++;
			}
		}
		return retval;
	}

	Album* FindAlbum(Song* song) {
		for (int i = 0; i < GetAlbumCount(); i++)
		{
			for (int j = 0; j < GetAlbums()[i].GetSongCount(); j++)
			{
				if (GetAlbums()[i].GetSongs()[j].GetName() == song->GetName());
				{
					return &GetAlbums()[i];
				}
			}
		}
	}

	Song* FindSong(string songTitle) {
		int allSongCount;
		Song* allSongs = GetAllSongs(allSongCount);
		for (int i = 0; i < allSongCount; i++) {
			if (allSongs[i].GetName() == songTitle) {
				return &(allSongs[i]);
			}
		}
		return nullptr;
	}

private:
	string Name;
	string MiscInfo;
	int AlbumCount;
	Album* Albums;
};


