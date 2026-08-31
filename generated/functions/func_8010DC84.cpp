#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010DC84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8010DC84;

loc_8010DC84:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r8 = MemoryInline::FlatRead16((r3 + 102));
    r6 = MemoryInline::FlatRead32((r5 + 68));
    r5 = MemoryInline::FlatRead32(r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 255);
    r7 = MemoryInline::FlatRead32((r3 + 80));
    r5 = (r5 + r6);
    r5 = (r5 + 5);
    r7_addr_0 = (r7 + r5);
    MemoryInline::FlatWrite8(r7_addr_0, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r7_addr_1 = (r7 + r5);
    MemoryInline::FlatWrite8(r7_addr_1, static_cast<uint8_t>(r8));
    r6 = MemoryInline::FlatRead32((r3 + 80));
    r0 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r6 + r0);
    ctx->lr = 0x8010DCE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8010A4CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8010DCE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010DCF0;
    }
}

loc_8010DCE8:
{
    r3 = 0;
    goto loc_8010DD28;
}

loc_8010DCF0:
{
    r3 = MemoryInline::FlatRead32((r31 + 136));
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r30 + 12), r3);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r31 + 80));
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r0 + r3);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8010DD18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010DD24;
    }
}

loc_8010DD1C:
{
    r0 = MemoryInline::FlatRead32((r31 + 136));
    MemoryInline::FlatWrite32((r31 + 140), r0);
}

loc_8010DD24:
{
    r3 = 1;
}

loc_8010DD28:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFE1F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8010DC84 func_8010DC84 preserves=true fpr_mask=0x00000000
