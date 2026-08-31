#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018BB70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r9_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8018BB70;

loc_8018BB70:
{
    r7 = MemoryInline::FlatRead8((r3 + 24));
}

loc_8018BB78:
{
    r6 = MemoryInline::FlatRead8((r3 + 25));
    r5 = MemoryInline::FlatRead8((r3 + 26));
    r0 = MemoryInline::FlatRead8((r3 + 27));
    MemoryInline::FlatWrite32((r3 + 32), r4);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8018BBA4;
    }
}

loc_8018BB9C:
{
    r5 = (r3 + 24);
    goto loc_8018BBA8;
}

loc_8018BBA4:
{
    r5 = (r3 + 28);
}

loc_8018BBA8:
{
    r4 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8018BBB8:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018BBDC;
    }
}

loc_8018BBD4:
{
    r5 = (r3 + 24);
    goto loc_8018BBE0;
}

loc_8018BBDC:
{
    r5 = (r3 + 28);
}

loc_8018BBE0:
{
    r4 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8018BBF0:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018BC14;
    }
}

loc_8018BC0C:
{
    r8 = (r3 + 24);
    goto loc_8018BC18;
}

loc_8018BC14:
{
    r8 = (r3 + 28);
}

loc_8018BC18:
{
    r5 = MemoryInline::FlatRead8(r8);
    r4 = 0x80810000u;
    r10 = (r4 + -32639);
    r0 = MemoryInline::FlatRead8((r3 + 11));
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r5));
    r7 = MemoryInline::FlatRead8((r3 + 66));
    r5 = MemoryInline::FlatRead8((r8 + 1));
    r4 = MemoryInline::FlatRead8((r3 + 15));
    r6 = (r0 * r7);
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead8((r3 + 19));
    r5 = MemoryInline::FlatRead8((r8 + 2));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r5));
    r4 = (r4 * r7);
    r8 = MemoryInline::FlatRead8((r8 + 3));
    r5 = (r0 * r7);
    r0 = (r8 * r7);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r7 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r6 = (r8 + r6);
    r8 = (static_cast<int32_t>(r6) >> 7);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r4 = (r7 + r4);
    r8 = (r8 + r9);
    r7 = (static_cast<int32_t>(r4) >> 7);
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r8));
    r5 = (r6 + r5);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r7 = (r7 + r6);
    r5 = (static_cast<int32_t>(r5) >> 7);
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r7));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    r0 = (r4 + r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 7);
    r5 = (r5 + r6);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r5));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000B8 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8018BB70 func_8018BB70 preserves=true fpr_mask=0x00000000
