#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CA8C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CA8C0;

loc_800CA8C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 22u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(19));
    r0 = (r0_rot_0 & 7);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_800CA8DC:
{
    r31 = r3;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA8EC;
    }
}

loc_800CA8E4:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA8EC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(22));
    r0 = (r0_rot_1 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_800CA8F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA900;
    }
}

loc_800CA8F8:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA900:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
}

loc_800CA908:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA914;
    }
}

loc_800CA90C:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA914:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 2));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
    r0 = (r0_rot_3 & 127);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(71));
}

loc_800CA920:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA92C;
    }
}

loc_800CA924:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA92C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r0 = (r0_rot_4 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_800CA934:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA940;
    }
}

loc_800CA938:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA940:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_800CA948:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA954;
    }
}

loc_800CA94C:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA954:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0 = (r0_rot_6 & 63);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(47));
}

loc_800CA960:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA96C;
    }
}

loc_800CA964:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA96C:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0 = (r0_rot_7 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_800CA974:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA980;
    }
}

loc_800CA978:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA980:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(13));
    r0 = (r0_rot_8 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_800CA988:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA994;
    }
}

loc_800CA98C:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA994:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(18));
    r0 = (r0_rot_9 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_800CA99C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA9A8;
    }
}

loc_800CA9A0:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA9A8:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(22));
    r0 = (r0_rot_10 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_800CA9B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA9BC;
    }
}

loc_800CA9B4:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA9BC:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_11 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
}

loc_800CA9C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA9D0;
    }
}

loc_800CA9C8:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA9D0:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_12 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
}

loc_800CA9DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA9E8;
    }
}

loc_800CA9E0:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA9E8:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_13 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_800CA9F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA9FC;
    }
}

loc_800CA9F4:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CA9FC:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
    r0 = (r0_rot_14 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_800CAA04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAA10;
    }
}

loc_800CAA08:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAA10:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r0 = (r0_rot_15 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
}

loc_800CAA18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAA24;
    }
}

loc_800CAA1C:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAA24:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(21));
    r0 = (r0_rot_16 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_800CAA2C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAA38;
    }
}

loc_800CAA30:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAA38:
{
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r0 = (r0_rot_17 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_800CAA40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CAA4C;
    }
}

loc_800CAA44:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAA4C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
}

loc_800CAA50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAA5C;
    }
}

loc_800CAA54:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAA5C:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r0 = (r0_rot_18 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
}

loc_800CAA68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAA74;
    }
}

loc_800CAA6C:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAA74:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_19 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_800CAA7C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAA88;
    }
}

loc_800CAA80:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAA88:
{
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_20 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
}

loc_800CAA90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAA9C;
    }
}

loc_800CAA94:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAA9C:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 14));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(21));
    r0 = (r0_rot_21 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
}

loc_800CAAA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAAB4;
    }
}

loc_800CAAAC:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAAB4:
{
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
    r0 = (r0_rot_22 & 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800CAABC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAAC8;
    }
}

loc_800CAAC0:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAAC8:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_23 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_800CAAD0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAADC;
    }
}

loc_800CAAD4:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAADC:
{
    r0 = (r4 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
}

loc_800CAAE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAAF0;
    }
}

loc_800CAAE8:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAAF0:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 16));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(18));
    r0 = (r0_rot_24 & 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_800CAAFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAB08;
    }
}

loc_800CAB00:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAB08:
{
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r0 = (r0_rot_25 & 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_800CAB10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAB1C;
    }
}

loc_800CAB14:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAB1C:
{
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
    r0 = (r0_rot_26 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_800CAB24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAB30;
    }
}

loc_800CAB28:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAB30:
{
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_27 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_800CAB38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAB44;
    }
}

loc_800CAB3C:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAB44:
{
    r0 = (r4 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
}

loc_800CAB4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAB58;
    }
}

loc_800CAB50:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAB58:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r3 + 18));
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r0 = (r0_rot_28 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_800CAB64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAB70;
    }
}

loc_800CAB68:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAB70:
{
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
    r0 = (r0_rot_29 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_800CAB78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAB84;
    }
}

loc_800CAB7C:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAB84:
{
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_30 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_800CAB8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAB98;
    }
}

loc_800CAB90:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAB98:
{
    r0 = (r4 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_800CABA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CABAC;
    }
}

loc_800CABA4:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CABAC:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 20));
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r0 = (r0_rot_31 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_800CABB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CABC4;
    }
}

loc_800CABBC:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CABC4:
{
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(21));
    r0 = (r0_rot_32 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_800CABCC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CABD8;
    }
}

loc_800CABD0:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CABD8:
{
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r0 = (r0_rot_33 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
}

loc_800CABE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CABEC;
    }
}

loc_800CABE4:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CABEC:
{
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r0 = (r0_rot_34 & 31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
}

loc_800CABF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAC00;
    }
}

loc_800CABF8:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAC00:
{
    ctx->lr = 0x800CAC04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C76D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CAC08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CAC14;
    }
}

loc_800CAC0C:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAC14:
{
    r0 = MemoryInline::FlatRead8((r31 + 22));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(128));
}

loc_800CAC1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAC28;
    }
}

loc_800CAC20:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAC28:
{
    r0 = MemoryInline::FlatRead8((r31 + 23));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(128));
}

loc_800CAC30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAC3C;
    }
}

loc_800CAC34:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAC3C:
{
    r3 = MemoryInline::FlatRead16((r31 + 68));
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r0 = (r0_rot_35 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_800CAC48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAC54;
    }
}

loc_800CAC4C:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAC54:
{
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r0 = (r0_rot_36 & 15);
}

loc_800CAC58:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r4 = (r4_rot_1 & 31);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800CAC70;
    }
}

loc_800CAC60:
{
}

loc_800CAC64:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800CAC70;
    }
}

loc_800CAC68:
{
    r0 = 0;
    goto loc_800CACC0;
}

loc_800CAC70:
{
}

loc_800CAC74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CAC88;
    }
}

loc_800CAC78:
{
}

loc_800CAC7C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CAC88;
    }
}

loc_800CAC80:
{
    r0 = 0;
    goto loc_800CACC0;
}

loc_800CAC88:
{
}

loc_800CAC8C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(12))) {
        goto loc_800CAC98;
    }
}

loc_800CAC90:
{
}

loc_800CAC94:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(31))) {
        goto loc_800CACA0;
    }
}

loc_800CAC98:
{
    r0 = 0;
    goto loc_800CACC0;
}

loc_800CACA0:
{
    r3 = 0x80250000u;
    r3 = (r3 + -14704);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (r3 - r4);
    r3 = (r3 | ~r4);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_37 & 2147483647);
    r0 = (r3 - r0);
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_38 & 1);
}

loc_800CACC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CACC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CACD0;
    }
}

loc_800CACC8:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CACD0:
{
    r0 = MemoryInline::FlatRead16((r31 + 68));
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_40 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_800CACDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800CACE8;
    }
}

loc_800CACE0:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CACE8:
{
    r3 = (r31 + 70);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C74D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CACF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAD0C;
    }
}

loc_800CACF8:
{
    r0 = MemoryInline::FlatRead16((r31 + 68));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CAD00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CAD0C;
    }
}

loc_800CAD04:
{
    r3 = 0;
    goto loc_800CAD10;
}

loc_800CAD0C:
{
    r3 = 1;
}

loc_800CAD10:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800003B gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CA8C0 func_800CA8C0 preserves=true fpr_mask=0x00000000
