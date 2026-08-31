#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022A4A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8022A4A8;

loc_8022A4A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
    goto loc_8022A4F8;
}

loc_8022A4CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r3_addr_2 = (r3 + r0);
    r30 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = r30;
    ctx->lr = 0x8022A4E0u;
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022B7C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = (r29 & 65535);
}

loc_8022A4E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022A4F4;
    }
}

loc_8022A4E8:
{
    r0 = MemoryInline::FlatRead16((r30 + 118));
    r0 = (r0 & 65534);
    MemoryInline::FlatWrite16((r30 + 118), static_cast<uint16_t>(r0));
}

loc_8022A4F4:
{
    r29 = (r29 + 1);
}

loc_8022A4F8:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r3 = (r29 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8022A504:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022A4CC;
    }
}

loc_8022A508:
{
    r10 = 0;
    r4 = 0;
    goto loc_8022A560;
}

loc_8022A514:
{
    r7 = MemoryInline::FlatRead8((r2 + -25119));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r9 = (r9_rot_2 & 524280);
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r10 = (r10 + 1);
    r6 = MemoryInline::FlatRead8((r2 + -25118));
    r5 = MemoryInline::FlatRead8((r2 + -25117));
    r8 = (r0 + r9);
    r3 = MemoryInline::FlatRead8((r2 + -25120));
    r9_addr_2 = (r9 + r0);
    MemoryInline::FlatWrite8(r9_addr_2, static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r8 + 3), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead32((r31 + 16));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r3 = (r0 + r9);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_8022A560:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r3 = (r10 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8022A56C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022A514;
    }
}

loc_8022A570:
{
    r3 = (r2 + -25696);
    r0 = 0;
    r6 = MemoryInline::FlatRead8((r2 + -25696));
    r5 = MemoryInline::FlatRead8((r3 + 1));
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r3 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 25), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00007FF gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022A4A8 func_8022A4A8 preserves=true fpr_mask=0x00000000
