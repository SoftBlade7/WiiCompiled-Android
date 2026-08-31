#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079C2E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079C2E4;

loc_8079C2E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r3 * 116);
    r4 = (r4 + 12104);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x809C0000u;
    r4 = (r4 + r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r6 = MemoryInline::FlatRead32((r4 + 40));
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 14528));
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r31 + 13860));
    r30 = (r6 & 255);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r0 = (r30 + 2);
    r30 = (r0 & 255);
    r29 = MemoryInline::FlatRead32((r4 + 8016));
    r3 = r29;
    // inline leaf 0x80654810 (4 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8432));
    r3 = MemoryInline::FlatRead32((r3 + 11140));
    // end of inlined leaf 0x80654810
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r30));
}

loc_8079C34C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8079C37C;
    }
}

loc_8079C350:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654758u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8079C35C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079C37C;
    }
}

loc_8079C360:
{
    r6 = MemoryInline::FlatRead32((r31 + 13860));
    r3 = r29;
    r4 = r28;
    r7 = r30;
    r5 = 2;
    ctx->lr = 0x8079C378u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065474Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8079C39C;
}

loc_8079C37C:
{
    r3 = 0x809C0000u;
    r5 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r5 + 13860));
    r4 = r28;
    r3 = MemoryInline::FlatRead32((r3 + 13856));
    r7 = r30;
    r5 = 2;
    ctx->lr = 0x8079C39Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079BFECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8079C39C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = 0x809C0000u;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r3 = MemoryInline::FlatRead32((r3 + 13860));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000001B gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8079C2E4 func_8079C2E4 preserves=true fpr_mask=0x00000000
