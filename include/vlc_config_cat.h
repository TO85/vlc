/*****************************************************************************
 * vlc_config_cat.h : Definition of configuration categories
 *****************************************************************************
 * Copyright (C) 2003 VLC authors and VideoLAN
 *
 * Authors: Clément Stenac <zorglub@videolan.org>
 *          Anil Daoud <anil@videolan.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#ifndef VLC_CONFIG_CAT_H
#define VLC_CONFIG_CAT_H

# include <vlc_plugin.h>

/*
 *  First, we need help strings for the General Settings and for the
 *  Plugins screen
 */
#define MAIN_TITLE N_( "VLC preferences" )
#define MAIN_HELP N_( \
    "Select \"Advanced Options\" to see all options." )

/* Interface */
#define INTF_TITLE N_("Interface")
#define INTF_HELP  N_( "Settings for VLC's interfaces" )

#define INTF_GENERAL_HELP N_( "Main interfaces settings" )

#define INTF_MAIN_TITLE  N_( "Main interfaces" )
#define INTF_MAIN_HELP N_( "Settings for the main interface" )

#define INTF_CONTROL_TITLE N_( "Control interfaces" )
#define INTF_CONTROL_HELP N_( "Settings for VLC's control interfaces" )

#define INTF_HOTKEYS_TITLE N_( "Hotkeys settings" )
#define INTF_HOTKEYS_HELP N_( "Hotkeys settings" )

/* Audio */
#define AUDIO_TITLE N_( "Audio" )
#define AUDIO_HELP N_( "Audio settings" )

#define AUDIO_GENERAL_HELP N_("General audio settings")

#define AFILTER_TITLE N_("Filters")
#define AFILTER_HELP N_( "Audio filters are used to process the audio stream." )

#define ARESAMPLER_TITLE N_("Audio resampler")

#define AVISUAL_TITLE N_("Visualizations")
#define AVISUAL_HELP N_( "Audio visualizations" )

#define AOUT_TITLE N_( "Output modules" )
#define AOUT_HELP N_("General settings for audio output modules.")

/* Video */
#define VIDEO_TITLE N_("Video")
#define VIDEO_HELP N_("Video settings")

#define VIDEO_GENERAL_HELP N_( "General video settings" )

#define _VOUT_TITLE N_("Output modules" )
#define VOUT_HELP N_("General settings for video output modules.")

#define VFILTER_TITLE N_("Filters" )
#define VFILTER_HELP N_("Video filters are used to process the video stream." )

#define SUBPIC_TITLE N_( "Subtitles / OSD")
#define SUBPIC_HELP N_( "Settings related to On-Screen-Display,"\
        " subtitles and \"overlay subpictures\"")

#define SPLITTER_TITLE N_("Splitters")
#define SPLITTER_HELP N_("Video splitters separate the stream into multiple videos.")

/*
#define TEXT_HELP N_( \
    "Use the settings of the \"freetype\" module to choose the font you " \
    "want VLC to use for text rendering (to display subtitles for example).")
*/
/* Input */
#define INPUT_TITLE N_( "Input / Codecs" )
#define INPUT_HELP N_( "Settings for input, demultiplexing, " \
         "decoding and encoding")

#define ACCESS_TITLE N_( "Access modules" )
#define ACCESS_HELP N_( \
    "Settings related to the various access methods. " \
    "Common settings you may want to alter are HTTP proxy or " \
    "caching settings." )

#define STREAM_FILTER_TITLE N_( "Stream filters" )
#define STREAM_FILTER_HELP N_( \
    "Stream filters are special modules that allow advanced operations on " \
    "the input side of VLC. Use with care..." )

#define DEMUX_TITLE N_("Demuxers")
#define DEMUX_HELP N_( "Demuxers are used to separate audio and video streams." )

#define VDEC_TITLE  N_( "Video codecs" )
#define VDEC_HELP N_( "Settings for the video, images or video+audio decoders and encoders." )

#define ADEC_TITLE  N_( "Audio codecs" )
#define ADEC_HELP N_( "Settings for the audio-only decoders and encoders." )

#define SDEC_TITLE N_( "Subtitle codecs")
#define SDEC_HELP N_( "Settings for subtitle, teletext and CC decoders and encoders." )

#define ADVANCED_HELP N_( "General input settings. Use with care..." )

/* Sout */
#define SOUT_TITLE N_( "Stream output" )
#define SOUT_HELP N_( \
      "Stream output settings are used when acting as a streaming server " \
      "or when saving incoming streams.\n" \
      "Streams are first muxed and then sent through an \"access output\" "\
      "module that can either save the stream to a file, or stream " \
      "it (UDP, HTTP, RTP/RTSP).\n" \
      "Sout streams modules allow advanced stream processing (transcoding, "\
      "duplicating...).")

#define SOUT_GENERAL_HELP N_( "General stream output settings")

#define SOUT_MUX_TITLE N_( "Muxers" )
#define SOUT_MUX_HELP N_( \
       "Muxers create the encapsulation formats that are used to " \
       "put all the elementary streams (video, audio, ...) " \
       "together. This setting allows you to always force a specific muxer. " \
       "You should probably not do that.\n" \
       "You can also set default parameters for each muxer." )

#define SOUT_ACO_TITLE N_( "Access output" )
#define SOUT_ACO_HELP N_( \
   "Access output modules control the ways the muxed streams are sent. " \
   "This setting allows you to always force a specific access output method. " \
   "You should probably not do that.\n" \
   "You can also set default parameters for each access output.")

#define SOUT_PACKET_TITLE N_( "Packetizers" )
#define SOUT_PACKET_HELP N_( \
        "Packetizers are used to \"preprocess\" the elementary "\
        "streams before muxing. " \
        "This setting allows you to always force a packetizer. " \
        "You should probably not do that.\n" \
        "You can also set default parameters for each packetizer." )

#define SOUT_RENDER_TITLE N_( "Renderers" )
#define SOUT_RENDER_HELP N_( "External renderer discovery related settings." )

#define SOUT_STREAM_TITLE N_("Sout stream")
#define SOUT_STREAM_HELP N_( "Sout stream modules allow to build a sout " \
                "processing chain. Please refer to the Streaming Howto for " \
                "more information. You can configure default options for " \
                "each sout stream module here.")

#define SOUT_VOD_TITLE N_( "VOD" )
#define SOUT_VOD_HELP N_( "VLC's implementation of Video On Demand" )


/* Playlist */
#define PLAYLIST_TITLE N_( "Playlist" )
#define PLAYLIST_HELP N_( "Settings related to playlist behaviour " \
        "(e.g. playback mode) and to modules that automatically add "\
        "items to the playlist (\"service discovery\" modules).")

#define PGENERAL_HELP N_( "General playlist behaviour")
#define SD_TITLE N_("Services discovery")
#define SD_HELP N_("Services discovery modules are facilities "\
        "that automatically add items to playlist.")

#define PEXPORT_TITLE N_( "Export" )
#define PEXPORT_HELP N_( "Settings relating to exporting playlists." )

/* Advanced */
#define AADVANCED_TITLE N_( "Advanced" )
#define AADVANCED_HELP N_( "Advanced settings. Use with care...")

#define MISC_TITLE N_( "Advanced settings" )

#define ANETWORK_TITLE N_( "Network" )
#define ANETWORK_HELP N_( "Advanced network settings." )

struct config_category_t
{
    int         id;
    int         general_subcat;
    const char *name;
    const char *help;
};

struct config_subcategory_t
{
    int         id;
    int         cat;
    const char *name;
    const char *help;
};

static const struct config_category_t categories_array[] =
{
    { CAT_INTERFACE,  SUBCAT_INTERFACE_GENERAL,  INTF_TITLE,       INTF_HELP      },
    { CAT_AUDIO,      SUBCAT_AUDIO_GENERAL,      AUDIO_TITLE,      AUDIO_HELP     },
    { CAT_VIDEO,      SUBCAT_VIDEO_GENERAL,      VIDEO_TITLE,      VIDEO_HELP     },
    { CAT_INPUT,      SUBCAT_INPUT_GENERAL,      INPUT_TITLE,      INPUT_HELP     },
    { CAT_SOUT,       SUBCAT_SOUT_GENERAL,       SOUT_TITLE,       SOUT_HELP      },
    { CAT_PLAYLIST,   SUBCAT_PLAYLIST_GENERAL,   PLAYLIST_TITLE,   PLAYLIST_HELP  },
    { CAT_ADVANCED,   SUBCAT_ADVANCED_MISC,      AADVANCED_TITLE,  AADVANCED_HELP },
};

static const struct config_subcategory_t subcategories_array[] =
{
    { SUBCAT_INTERFACE_GENERAL,    CAT_INTERFACE,  INTF_TITLE,           INTF_GENERAL_HELP  },
    { SUBCAT_INTERFACE_MAIN,       CAT_INTERFACE,  INTF_MAIN_TITLE,      INTF_MAIN_HELP     },
    { SUBCAT_INTERFACE_CONTROL,    CAT_INTERFACE,  INTF_CONTROL_TITLE,   INTF_CONTROL_HELP  },
    { SUBCAT_INTERFACE_HOTKEYS,    CAT_INTERFACE,  INTF_HOTKEYS_TITLE,   INTF_HOTKEYS_HELP  },

    { SUBCAT_AUDIO_GENERAL,        CAT_AUDIO,      AUDIO_TITLE,          AUDIO_GENERAL_HELP },
    { SUBCAT_AUDIO_AOUT,           CAT_AUDIO,      AOUT_TITLE,           AOUT_HELP          },
    { SUBCAT_AUDIO_AFILTER,        CAT_AUDIO,      AFILTER_TITLE,        AFILTER_HELP       },
    { SUBCAT_AUDIO_RESAMPLER,      CAT_AUDIO,      ARESAMPLER_TITLE,     AFILTER_HELP       },
    { SUBCAT_AUDIO_VISUAL,         CAT_AUDIO,      AVISUAL_TITLE,        AVISUAL_HELP       },

    { SUBCAT_VIDEO_GENERAL,        CAT_VIDEO,      VIDEO_TITLE,          VIDEO_GENERAL_HELP },
    { SUBCAT_VIDEO_VOUT,           CAT_VIDEO,      _VOUT_TITLE,          VOUT_HELP          },
    { SUBCAT_VIDEO_VFILTER,        CAT_VIDEO,      VFILTER_TITLE,        VFILTER_HELP       },
    { SUBCAT_VIDEO_SUBPIC,         CAT_VIDEO,      SUBPIC_TITLE,         SUBPIC_HELP        },
    { SUBCAT_VIDEO_SPLITTER,       CAT_VIDEO,      SPLITTER_TITLE,       SPLITTER_HELP      },

    { SUBCAT_INPUT_GENERAL,        CAT_INPUT,      INPUT_TITLE,          INPUT_HELP         },
    { SUBCAT_INPUT_ACCESS,         CAT_INPUT,      ACCESS_TITLE,         ACCESS_HELP        },
    { SUBCAT_INPUT_DEMUX,          CAT_INPUT,      DEMUX_TITLE,          DEMUX_HELP         },
    { SUBCAT_INPUT_VCODEC,         CAT_INPUT,      VDEC_TITLE,           VDEC_HELP          },
    { SUBCAT_INPUT_ACODEC,         CAT_INPUT,      ADEC_TITLE,           ADEC_HELP          },
    { SUBCAT_INPUT_SCODEC,         CAT_INPUT,      SDEC_TITLE,           SDEC_HELP          },
    { SUBCAT_INPUT_STREAM_FILTER,  CAT_INPUT,      STREAM_FILTER_TITLE,  STREAM_FILTER_HELP },

    { SUBCAT_SOUT_GENERAL,         CAT_SOUT,       SOUT_TITLE,           SOUT_GENERAL_HELP  },
    { SUBCAT_SOUT_STREAM,          CAT_SOUT,       SOUT_STREAM_TITLE,    SOUT_STREAM_HELP   },
    { SUBCAT_SOUT_MUX,             CAT_SOUT,       SOUT_MUX_TITLE,       SOUT_MUX_HELP      },
    { SUBCAT_SOUT_ACO,             CAT_SOUT,       SOUT_ACO_TITLE,       SOUT_ACO_HELP      },
    { SUBCAT_SOUT_PACKETIZER,      CAT_SOUT,       SOUT_PACKET_TITLE,    SOUT_PACKET_HELP   },
    { SUBCAT_SOUT_RENDERER,        CAT_SOUT,       SOUT_RENDER_TITLE,    SOUT_RENDER_HELP   },
    { SUBCAT_SOUT_VOD,             CAT_SOUT,       SOUT_VOD_TITLE,       SOUT_VOD_HELP      },

    { SUBCAT_PLAYLIST_GENERAL,     CAT_PLAYLIST,   PLAYLIST_TITLE,       PGENERAL_HELP      },
    { SUBCAT_PLAYLIST_EXPORT,      CAT_PLAYLIST,   PEXPORT_TITLE,        PEXPORT_HELP       },
    { SUBCAT_PLAYLIST_SD,          CAT_PLAYLIST,   SD_TITLE,             SD_HELP            },

    { SUBCAT_ADVANCED_MISC,        CAT_ADVANCED,   MISC_TITLE,           AADVANCED_HELP     },
    { SUBCAT_ADVANCED_NETWORK,     CAT_ADVANCED,   ANETWORK_TITLE,       ANETWORK_HELP      },

    { SUBCAT_HIDDEN,               CAT_HIDDEN,     NULL,                 NULL               },
};

/** Get the table index for the given category entry. */
VLC_USED
static inline int vlc_config_cat_IndexOf( int cat )
{
    int index = -1;
    for( unsigned i = 0; i < ARRAY_SIZE(categories_array); i++ )
    {
        if( categories_array[i].id == cat )
        {
            index = i;
            break;
        }
    }
    return index;
}

/** Get the table index for the given subcategory entry. */
VLC_USED
static inline int vlc_config_subcat_IndexOf( int subcat )
{
    int index = -1;
    for( unsigned i = 0; i < ARRAY_SIZE(subcategories_array); i++ )
    {
        if( subcategories_array[i].id == subcat )
        {
            index = i;
            break;
        }
    }
    return index;
}

/** Get the "general" subcategory for a given category.
 *
 * In a cat/subcat preference tree, subcategories typically appear as child
 * nodes under their respective parent category node. Core config items, which
 * are always associated with a particular subcategory, are shown when that
 * subcategory node is selected. Each category however has a "general"
 * subcategory which is not shown as a child node, instead the options for
 * this are shown when the category node itself is selected in the tree.
 *
 * One or more nodes are also created in the tree per plugin, with the
 * location relating to the subcategory association of its config items. Plugin
 * nodes associated with general subcategories naturally appear as child nodes
 * of the category node (as a sibling to its subcategory nodes), rather than as
 * a child node of a subcategory node.
 */
VLC_USED
static inline int vlc_config_cat_GetGeneralSubcat( int cat )
{
    int i = vlc_config_cat_IndexOf( cat );
    return (i != -1) ? categories_array[i].general_subcat : SUBCAT_UNKNOWN;
}

/** Get the name for a category. */
VLC_USED
static inline const char *vlc_config_cat_GetName( int cat )
{
    int i = vlc_config_cat_IndexOf( cat );
    return (i != -1) ? vlc_gettext(categories_array[i].name) : NULL;
}

/** Get the help text for a category. */
VLC_USED
static inline const char *vlc_config_cat_GetHelp( int cat )
{
    int i = vlc_config_cat_IndexOf( cat );
    return (i != -1) ? vlc_gettext(categories_array[i].help) : NULL;
}

/** Get the name for a subcategory. */
VLC_USED
static inline const char *vlc_config_subcat_GetName( int subcat )
{
    int i = vlc_config_subcat_IndexOf( subcat );
    return (i != -1) ? vlc_gettext(subcategories_array[i].name) : NULL;
}

/** Get the help text for a subcategory. */
VLC_USED
static inline const char *vlc_config_subcat_GetHelp( int subcat )
{
    int i = vlc_config_subcat_IndexOf( subcat );
    return (i != -1) ? vlc_gettext(subcategories_array[i].help) : NULL;
}

/** Get the parent category for the given subcategory. */
VLC_USED
static inline int vlc_config_cat_FromSubcat( int subcat )
{
    int i = vlc_config_subcat_IndexOf( subcat );
    return (i != -1) ? subcategories_array[i].cat : CAT_UNKNOWN;
}

/** Check if the given subcategory is a "general" one. */
VLC_USED
static inline bool vlc_config_subcat_IsGeneral( int subcat )
{
    if( subcat == SUBCAT_UNKNOWN )
        return false;
    int cat = vlc_config_cat_FromSubcat( subcat );
    return (subcat == vlc_config_cat_GetGeneralSubcat( cat ));
}

#endif /* VLC_CONFIG_CAT_H */
