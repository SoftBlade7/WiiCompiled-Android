#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056022C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8056022C;

loc_8056022C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = (r7 + 18896);
    r6 = (r7 + 8);
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    r27 = r3;
    r28 = r4;
    r31 = (r31 + 5084);
    r30 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    MemoryInline::FlatWrite32((r3 + 12), r7);
    MemoryInline::FlatWrite32((r3 + 8), r6);
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_80560274:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8056027C:
{
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = r27;
    r29 = MemoryInline::FlatRead32(r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80560294;
    }
}

loc_80560290:
{
    r0 = (r27 + 8);
}

loc_80560294:
{
    MemoryInline::FlatWrite32((r29 + 212), r0);
    r3 = r29;
    r4 = 1;
    // inline leaf 0x8006DD90 (5 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r4 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r3 + 218), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8006DD90
    r4 = MemoryInline::FlatRead32((r27 + 16));
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DD50u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_805602B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80560274;
    }
}

loc_805602BC:
{
    r4 = 0x808B0000u;
    r5 = 0;
    r4 = (r4 + 18792);
    MemoryInline::FlatWrite32((r27 + 20), r31);
    r0 = (r4 + 8);
    r3 = r27;
    MemoryInline::FlatWrite16((r27 + 24), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r27 + 12), r4);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800003B gpr_write=0xF80000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056022C func_8056022C preserves=true fpr_mask=0x00000000
