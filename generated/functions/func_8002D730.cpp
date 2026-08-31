#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002D730(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8002D730;

loc_8002D730:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8002D74C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002D758;
    }
}

loc_8002D750:
{
    r4 = (r3 + 12);
    goto loc_8002D804;
}

loc_8002D758:
{
    r11 = 1065484288;
    r30 = 524288;
    r12 = (r11 + -2507);
    r10 = 816250880;
    r11 = MemoryInline::FlatRead16((r5 + 6));
    r5 = (r10 + 16787);
    r31 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002D778:
{
    r3 = (r4 * r12);
    r10 = 923860992;
    r30 = (r30 + -18135);
    r10 = (r10 + -26649);
    r0 = (r11 * r5);
    r3 = (r3 + r0);
    r3 = (r3 + 327680);
    r0 = (r3 + -16557);
    r5 = (r9 * r30);
    r3 = (r31 * r10);
    r3 = (r5 + r3);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = MemoryInline::FlatRead8((r1 + 10));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r5 = (r5 ^ r0);
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r3 = (r3 ^ r5);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    r0 = (r0 ^ r3);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002D804;
    }
}

loc_8002D7D8:
{
    r4 = MemoryInline::FlatRead16(r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8002D7E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002D87C;
    }
}

loc_8002D7E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 65535);
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r3 - r0);
    r0 = (r0 * 12);
    r3 = (r7 + r0);
    r4 = (r3 + 4);
}

loc_8002D804:
{
    r0 = MemoryInline::FlatRead16((r4 + 10));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r6 + r0);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8002D818:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002D87C;
    }
}

loc_8002D81C:
{
    r0 = MemoryInline::FlatRead8((r4 + 6));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002D824:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002D854;
    }
}

loc_8002D828:
{
    r3 = MemoryInline::FlatRead32((r8 + 200));
    r5 = r8;
    r7 = MemoryInline::FlatRead16((r8 + 226));
    r8 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r9 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 16);
    ctx->lr = 0x8002D850u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80037BF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8002D87C;
}

loc_8002D854:
{
    r3 = MemoryInline::FlatRead32((r8 + 200));
    r5 = r8;
    r7 = MemoryInline::FlatRead16((r8 + 226));
    r8 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r9 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 16);
    ctx->lr = 0x8002D87Cu;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80037D70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8002D87C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE001FFB gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8002D730 func_8002D730 preserves=true fpr_mask=0x00000000
