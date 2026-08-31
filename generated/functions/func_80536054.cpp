#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80536054(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80536054;

loc_80536054:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = MemoryInline::FlatRead32((r3 + -10520));
    r3 = MemoryInline::FlatRead32((r4 + 32));
}

loc_80536070:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053607C;
    }
}

loc_80536074:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80536080;
}

loc_8053607C:
{
    r3 = 0;
}

loc_80536080:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_8053608C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805360B4;
    }
}

loc_80536090:
{
    r3 = MemoryInline::FlatRead32((r4 + 28));
}

loc_80536098:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805360A4;
    }
}

loc_8053609C:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_805360A8;
}

loc_805360A4:
{
    r3 = 0;
}

loc_805360A8:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_805360B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805360B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805360C4;
    }
}

loc_805360BC:
{
    r3 = 0;
    goto loc_805361F8;
}

loc_805360C4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
}

loc_805360D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80536110;
    }
}

loc_805360D8:
{
    r4 = 0;
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805360F0;
    }
}

loc_805360E8:
{
    r3 = 0;
    goto loc_805361F8;
}

loc_805360F0:
{
    r4 = 0x809C0000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 1);
    goto loc_805361F8;
}

loc_80536110:
{
    r6 = MemoryInline::FlatRead8((r3 + 36));
    r9 = 0;
    r10 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
}

loc_80536120:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80536140;
    }
}

loc_80536124:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_2 & 1);
    goto loc_805361F8;
}

loc_80536140:
{
    r4 = 0x809C0000u;
    r7 = (r3 + 40);
    r8 = MemoryInline::FlatRead32((r4 + -10448));
    r11 = 0;
    ctr = r6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80536158:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805361F4;
    }
}

loc_8053615C:
{
    r0 = (r6 - r11);
    r5 = MemoryInline::FlatRead32((r8 + 24));
    r0 = (r0 & 255);
    r4 = MemoryInline::FlatRead32((r8 + 12));
    r5 = (r5 + r0);
    r12 = 0;
    r5 = MemoryInline::FlatRead8((r5 + -1));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r0 & 2);
}

loc_80536188:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805361DC;
    }
}

loc_8053618C:
{
    r4 = MemoryInline::FlatRead32((r3 + 2932));
    r0 = (r4 + -2);
}

loc_80536198:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_805361A4;
    }
}

loc_8053619C:
{
    r12 = 1;
    goto loc_805361DC;
}

loc_805361A4:
{
    r0 = (r5 * 240);
    r9 = (r9 + 1);
    r4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_805361B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805361C0;
    }
}

loc_805361BC:
{
    r10 = 1;
}

loc_805361C0:
{
}

loc_805361C4:
{
    r12 = 0;
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_805361DC;
    }
}

loc_805361CC:
{
    r0 = (r9 & 255);
}

loc_805361D4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_805361DC;
    }
}

loc_805361D8:
{
    r12 = 1;
}

loc_805361DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_805361E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805361EC;
    }
}

loc_805361E4:
{
    r3 = 0;
    goto loc_805361F8;
}

loc_805361EC:
{
    r11 = (r11 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053615C;
    }
}

loc_805361F4:
{
    r3 = 1;
}

loc_805361F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80536054 func_80536054 preserves=true fpr_mask=0x00000000
