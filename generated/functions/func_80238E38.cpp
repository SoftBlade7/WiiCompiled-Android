#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80238E38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80238E38;

loc_80238E38:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRam32((r1 + 156), r31);
    MemoryInline::FlatWriteRam32((r1 + 152), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 148), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead16((r29 + 336));
    r31 = r3;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r29 + 336), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_80238E74:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(57343))) {
        goto loc_80238E84;
    }
}

loc_80238E78:
{
    r3 = 65536;
    r0 = (r3 + -12288);
    MemoryInline::FlatWrite16((r29 + 336), static_cast<uint16_t>(r0));
}

loc_80238E84:
{
    r3 = MemoryInline::FlatRead16((r29 + 336));
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r30 + 8), r0);
    r0 = MemoryInline::FlatRead32((r29 + 108));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80238E9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80238EE0;
    }
}

loc_80238EA0:
{
    r3 = (r1 + 16);
    ctx->lr = 0x80238EA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016CFA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r5 = r30;
    r3 = (r1 + 16);
    r4 = (r1 + 8);
    // inline leaf 0x8016D030 (5 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWriteRam32(r4, r6);
    MemoryInline::FlatWrite32(r5, r0);
    // end of inlined leaf 0x8016D030
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80238EC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80238ED0;
    }
}

loc_80238EC8:
{
    r3 = MemoryInline::FlatRead32(r30);
    ctx->lr = 0x80238ED0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016D098u>(ctx);
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

loc_80238ED0:
{
    r3 = MemoryInline::FlatRead32((r29 + 112));
    MemoryInline::FlatWrite32((r3 + 8), r30);
    MemoryInline::FlatWrite32((r29 + 112), r30);
    goto loc_80238EE8;
}

loc_80238EE0:
{
    MemoryInline::FlatWrite32((r29 + 108), r30);
    MemoryInline::FlatWrite32((r29 + 112), r30);
}

loc_80238EE8:
{
    r3 = MemoryInline::FlatRead16((r29 + 336));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016E9FCu>(ctx);
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 164));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    r29 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80238E38 func_80238E38 preserves=true fpr_mask=0x00000000
