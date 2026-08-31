#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D7700(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801D7700;

loc_801D7700:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    ctx->lr = 0x801D7724u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D9E94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r30 = r3;
    // inline leaf 0x801D9EFC (1 guest instruction(s))
    // end of inlined leaf 0x801D9EFC
    r29 = r3;
    r3 = r30;
    // inline leaf 0x801D9F08 (2 guest instruction(s))
    r3 = (r3 + 2056);
    // end of inlined leaf 0x801D9F08
    r31 = r3;
    r3 = r30;
    // inline leaf 0x801D9F18 (2 guest instruction(s))
    r3 = (r3 + 2060);
    // end of inlined leaf 0x801D9F18
    r5 = MemoryInline::FlatRead32(r31);
    r4 = 10;
    r0 = 0;
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r28 + 816), r4);
    MemoryInline::FlatWrite32((r28 + 804), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D7768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D7830;
    }
}

loc_801D776C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D7774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D7830;
    }
}

loc_801D7778:
{
    r3 = r28;
    ctx->lr = 0x801D7780u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D6430u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D7784:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D778C;
    }
}

loc_801D7788:
{
    goto loc_801D7834;
}

loc_801D778C:
{
    r3 = r28;
    ctx->lr = 0x801D7794u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D66D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D7798:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D77A4;
    }
}

loc_801D779C:
{
    r3 = 1;
    goto loc_801D7834;
}

loc_801D77A4:
{
    r6 = MemoryInline::FlatRead32((r29 + 2000));
    r3 = r29;
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x801D77B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D4E44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D77BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D7830;
    }
}

loc_801D77C0:
{
}

loc_801D77C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1004))) {
        goto loc_801D77E8;
    }
}

loc_801D77C8:
{
    r3 = r29;
    // inline leaf 0x801D2F9C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2004));
    // end of inlined leaf 0x801D2F9C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D77D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D77E0;
    }
}

loc_801D77D8:
{
    r0 = 16;
    MemoryInline::FlatWrite32((r28 + 816), r0);
}

loc_801D77E0:
{
    r3 = 1;
    goto loc_801D7834;
}

loc_801D77E8:
{
}

loc_801D77EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1005))) {
        goto loc_801D7810;
    }
}

loc_801D77F0:
{
    r3 = r29;
    // inline leaf 0x801D2F9C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2004));
    // end of inlined leaf 0x801D2F9C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D77FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D7808;
    }
}

loc_801D7800:
{
    r0 = 17;
    MemoryInline::FlatWrite32((r28 + 816), r0);
}

loc_801D7808:
{
    r3 = 1;
    goto loc_801D7834;
}

loc_801D7810:
{
    r3 = r29;
    // inline leaf 0x801D2F9C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2004));
    // end of inlined leaf 0x801D2F9C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D781C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D7828;
    }
}

loc_801D7820:
{
    r0 = 14;
    MemoryInline::FlatWrite32((r28 + 816), r0);
}

loc_801D7828:
{
    r3 = 1;
    goto loc_801D7834;
}

loc_801D7830:
{
    r3 = 0;
}

loc_801D7834:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801D7700 func_801D7700 preserves=true fpr_mask=0x00000000
