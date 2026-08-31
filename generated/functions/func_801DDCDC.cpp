#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DDCDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801DDCDC;

loc_801DDCDC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r31 = r3;
    r27 = r4;
    r28 = r5;
    r0 = (r7 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDD04:
{
    r29 = r6;
    r30 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDD18;
    }
}

loc_801DDD10:
{
    r0 = (r7 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDD14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDD20;
    }
}

loc_801DDD18:
{
    r3 = -7;
    goto loc_801DDF2C;
}

loc_801DDD20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801DDD24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDD30;
    }
}

loc_801DDD28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801DDD2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DDD38;
    }
}

loc_801DDD30:
{
    r3 = -5;
    goto loc_801DDF2C;
}

loc_801DDD38:
{
    r0 = MemoryInline::FlatRead8((r3 + 201));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801DDD40:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DDD4C;
    }
}

loc_801DDD44:
{
    r3 = -6;
    goto loc_801DDF2C;
}

loc_801DDD4C:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801E15ACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DDD58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DDD64;
    }
}

loc_801DDD5C:
{
    r3 = -3;
    goto loc_801DDF2C;
}

loc_801DDD64:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 2);
}

loc_801DDD6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801DDDA4;
    }
}

loc_801DDD70:
{
    r0 = (r29 + -65536);
}

loc_801DDD78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_801DDDA4;
    }
}

loc_801DDD7C:
{
}

loc_801DDD80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801DDDA4;
    }
}

loc_801DDD84:
{
    r0 = (r29 + -131072);
}

loc_801DDD8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_801DDDA4;
    }
}

loc_801DDD90:
{
    r0 = (r29 + -196608);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_801DDD98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDDA4;
    }
}

loc_801DDD9C:
{
    r3 = -4;
    goto loc_801DDF2C;
}

loc_801DDDA4:
{
    r3 = 196608;
    r0 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_801DDDB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDDE8;
    }
}

loc_801DDDB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DDDCC;
    }
}

loc_801DDDB8:
{
    r3 = 131072;
    r0 = (r3 + 1);
}

loc_801DDDC4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(r0))) {
        goto loc_801DDDDC;
    }
}

loc_801DDDC8:
{
    goto loc_801DDDFC;
}

loc_801DDDCC:
{
    r0 = (r3 + 3);
}

loc_801DDDD4:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_801DDDFC;
    }
}

loc_801DDDD8:
{
    goto loc_801DDDF4;
}

loc_801DDDDC:
{
    r3 = 65536;
    r0 = (r3 + 16384);
    goto loc_801DDE04;
}

loc_801DDDE8:
{
    r3 = 131072;
    r0 = (r3 + -8192);
    goto loc_801DDE04;
}

loc_801DDDF4:
{
    r0 = 128;
    goto loc_801DDE04;
}

loc_801DDDFC:
{
    r3 = 131072;
    r0 = (r3 + 17840);
}

loc_801DDE04:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_801DDE08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DDE14;
    }
}

loc_801DDE0C:
{
    r3 = -8;
    goto loc_801DDF2C;
}

loc_801DDE14:
{
    r5 = MemoryInline::FlatRead8((r31 + 201));
    r6 = 0;
}

loc_801DDE20:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801DDEBC;
    }
}

loc_801DDE24:
{
}

loc_801DDE28:
{
    r3 = (r5 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_801DDE94;
    }
}

loc_801DDE30:
{
    r0 = (r3 + 7);
    r4 = r31;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_801DDE44:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_801DDE94;
    }
}

loc_801DDE48:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 120), 0, 32u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 120));
    r6 = (r6 + 8);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 124));
    r30 = (r30 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 128));
    r30 = (r30 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 132));
    r30 = (r30 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 136));
    r30 = (r30 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 140));
    r30 = (r30 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 144));
    r30 = (r30 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 148));
    r30 = (r30 + r3);
    r4 = (r4 + 32);
    r30 = (r30 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DDE48;
    }
}

loc_801DDE94:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = (r5 - r6);
    r3 = (r31 + r3);
    ctr = r0;
}

loc_801DDEA8:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_801DDEBC;
    }
}

loc_801DDEAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r3 = (r3 + 4);
    r30 = (r30 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DDEAC;
    }
}

loc_801DDEBC:
{
    r3 = 131072;
    r30 = (r30 + r28);
    r0 = (r3 + 17840);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_801DDECC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DDED8;
    }
}

loc_801DDED0:
{
    r3 = -8;
    goto loc_801DDF2C;
}

loc_801DDED8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & 2040);
    r4 = r27;
    r3 = (r31 + r0);
    r5 = r28;
    r3 = (r3 + 104);
    // inline leaf 0x801DC9BC (3 guest instruction(s))
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    // end of inlined leaf 0x801DC9BC
    r0 = MemoryInline::FlatRead8((r31 + 201));
    r3 = 0;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 120), r28);
    r0 = MemoryInline::FlatRead8((r31 + 201));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 128), r29);
    r4 = MemoryInline::FlatRead8((r31 + 201));
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r4 + 1);
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite8((r31 + 201), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_801DDF2C:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80000FB gpr_write=0xF80008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DDCDC func_801DDCDC preserves=true fpr_mask=0x00000000
