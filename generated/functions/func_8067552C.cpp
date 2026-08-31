#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067552C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8067552C;

loc_8067552C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    r0 = (r3 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80675558:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80675570;
    }
}

loc_8067555C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_80675560:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675588;
    }
}

loc_80675564:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_80675568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806755CC;
    }
}

loc_8067556C:
{
    goto loc_8067560C;
}

loc_80675570:
{
    r3 = MemoryInline::FlatRead32((r31 + 8512));
    // inline leaf 0x80677238 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x80677238
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 24), r3);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8067560C;
}

loc_80675588:
{
    r3 = MemoryInline::FlatRead32((r31 + 8512));
    // inline leaf 0x80677238 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x80677238
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 24), r3);
    r31 = 0x809C0000u;
    r5 = r3;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r4 = 5;
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    ctx->lr = 0x806755B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80656920u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    ctx->lr = 0x806755B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80656D9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806755BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067560C;
    }
}

loc_806755C0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    // inline leaf 0x806561A8 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 10069), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806561A8
    goto loc_8067560C;
}

loc_806755CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 8512));
    // inline leaf 0x80677238 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x80677238
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 24), r3);
    r31 = 0x809C0000u;
    r5 = r3;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    ctx->lr = 0x806755F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80656920u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    ctx->lr = 0x806755FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80656D9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80675600:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067560C;
    }
}

loc_80675604:
{
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    // inline leaf 0x806561A8 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 10069), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806561A8
}

loc_8067560C:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8067552C func_8067552C preserves=true fpr_mask=0x00000000
