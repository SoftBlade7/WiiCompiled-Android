#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AFBF0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AFBF0;

loc_801AFBF0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & 16383);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 16777215);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -28908));
    r0 = (r0 & 1792);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1024));
}

loc_801AFC1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AFD94;
    }
}

loc_801AFC20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AFC54;
    }
}

loc_801AFC24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(512));
}

loc_801AFC28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AFD10;
    }
}

loc_801AFC2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AFC48;
    }
}

loc_801AFC30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(256));
}

loc_801AFC34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AFCC4;
    }
}

loc_801AFC38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AFDCC;
    }
}

loc_801AFC3C:
{
}

loc_801AFC40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AFC78;
    }
}

loc_801AFC44:
{
    goto loc_801AFDCC;
}

loc_801AFC48:
{
}

loc_801AFC4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(768))) {
        goto loc_801AFD58;
    }
}

loc_801AFC50:
{
    goto loc_801AFDCC;
}

loc_801AFC54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1536));
}

loc_801AFC58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AFC78;
    }
}

loc_801AFC5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AFC6C;
    }
}

loc_801AFC60:
{
}

loc_801AFC64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1280))) {
        goto loc_801AFC78;
    }
}

loc_801AFC68:
{
    goto loc_801AFDCC;
}

loc_801AFC6C:
{
}

loc_801AFC70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1792))) {
        goto loc_801AFC78;
    }
}

loc_801AFC74:
{
    goto loc_801AFDCC;
}

loc_801AFC78:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_12 & 255);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & 65535);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_14 & 240);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_15 & 240);
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0 = (r0 & 240);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_16 & 240);
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
    goto loc_801AFDCC;
}

loc_801AFCC4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 240);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_3 & 240);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 255);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 255);
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0 = (r0 & 240);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & 240);
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
    goto loc_801AFDCC;
}

loc_801AFD10:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_7 & 240);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_8 & 240);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 240);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r0 = (r0_rot_10 & 240);
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_11 & 255);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
    goto loc_801AFDCC;
}

loc_801AFD58:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0 = 0;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r6 = (r6_rot_1 & 255);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_2 & 65535);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r6 = (r6_rot_3 & 255);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r6));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
    goto loc_801AFDCC;
}

loc_801AFD94:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0 = 0;
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r6 = (r6_rot_4 & 255);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r6));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_5 & 65535);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_17 & 255);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
}

loc_801AFDCC:
{
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r5 = 0x80350000u;
    r8 = MemoryInline::FlatRead8((r4 + 3));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r9 = (r6 + -128);
    r7 = MemoryInline::FlatRead8((r4 + 4));
    r6 = MemoryInline::FlatRead8((r4 + 5));
    r8 = (r8 + -128);
    r7 = (r7 + -128);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r9));
    r6 = (r6 + -128);
    r5 = (r5 + -32288);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r6));
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_0);
    r5 = (r0 & -65536);
    r0 = (r5 + -150994944);
}

loc_801AFE18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_801AFE5C;
    }
}

loc_801AFE1C:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 128);
    r0 = (r0 ^ 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AFE2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AFE5C;
    }
}

loc_801AFE30:
{
    r0 = 0x80000000u;
    r5 = MemoryInline::FlatRead32((r13 + -25180));
    r3 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r3 = (r5 | r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -25180), r3);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_801AFE5C:
{
    r0 = (r3 * 12);
    r5 = 0x80350000u;
    r6 = 0x80000000u;
    r7 = MemoryInline::FlatRead32((r13 + -25180));
    r5 = (r5 + -32336);
    r5 = (r5 + r0);
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r3));
    r8 = MemoryInline::FlatRead8((r5 + 2));
    r0 = (r7 & ~r0);
    MemoryInline::FlatWrite32((r13 + -25180), r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r6 = MemoryInline::FlatRead8((r4 + 2));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801AFEAC;
    }
}

loc_801AFE90:
{
    r3 = (r8 + -128);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AFEA0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_801AFEC8;
    }
}

loc_801AFEA4:
{
    r6 = r3;
    goto loc_801AFEC8;
}

loc_801AFEAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AFEC8;
    }
}

loc_801AFEB0:
{
    r3 = (r8 + 127);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AFEC0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_801AFEC8;
    }
}

loc_801AFEC4:
{
    r6 = r3;
}

loc_801AFEC8:
{
    r0 = (r6 - r8);
    r6 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r5 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801AFEFC;
    }
}

loc_801AFEE0:
{
    r3 = (r7 + -128);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AFEF0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_801AFF18;
    }
}

loc_801AFEF4:
{
    r6 = r3;
    goto loc_801AFF18;
}

loc_801AFEFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AFF18;
    }
}

loc_801AFF00:
{
    r3 = (r7 + 127);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AFF10:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_801AFF18;
    }
}

loc_801AFF14:
{
    r6 = r3;
}

loc_801AFF18:
{
    r0 = (r6 - r7);
    r6 = MemoryInline::FlatRead8((r4 + 4));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r5 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801AFF4C;
    }
}

loc_801AFF30:
{
    r3 = (r7 + -128);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AFF40:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_801AFF68;
    }
}

loc_801AFF44:
{
    r6 = r3;
    goto loc_801AFF68;
}

loc_801AFF4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AFF68;
    }
}

loc_801AFF50:
{
    r3 = (r7 + 127);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AFF60:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_801AFF68;
    }
}

loc_801AFF64:
{
    r6 = r3;
}

loc_801AFF68:
{
    r0 = (r6 - r7);
    r6 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r5 + 5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801AFF9C;
    }
}

loc_801AFF80:
{
    r3 = (r7 + -128);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AFF90:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_801AFFB8;
    }
}

loc_801AFF94:
{
    r6 = r3;
    goto loc_801AFFB8;
}

loc_801AFF9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AFFB8;
    }
}

loc_801AFFA0:
{
    r3 = (r7 + 127);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AFFB0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_801AFFB8;
    }
}

loc_801AFFB4:
{
    r6 = r3;
}

loc_801AFFB8:
{
    r0 = (r6 - r7);
    r3 = MemoryInline::FlatRead8((r4 + 6));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 6));
}

loc_801AFFCC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_801AFFD4;
    }
}

loc_801AFFD0:
{
    r3 = r0;
}

loc_801AFFD4:
{
    r0 = (r3 - r0);
    r3 = MemoryInline::FlatRead8((r4 + 7));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 7));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801AFFE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AFFF0;
    }
}

loc_801AFFEC:
{
    r3 = r0;
}

loc_801AFFF0:
{
    r0 = (r3 - r0);
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801AFBF0 func_801AFBF0 preserves=true fpr_mask=0x00000000
