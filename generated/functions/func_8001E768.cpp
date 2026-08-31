#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001E768(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001E768;

loc_8001E768:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    // inline leaf 0x8002084C (6 guest instruction(s))
    r4 = 0x802A0000u;
    r0 = 1;
    r4 = (r4 + 25744);
    r3 = 0;
    MemoryInline::FlatWriteRam32((r4 + 152), r0);
    // end of inlined leaf 0x8002084C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001E780:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E7A0;
    }
}

loc_8001E784:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1796));
}

loc_8001E788:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E7A8;
    }
}

loc_8001E78C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1797));
}

loc_8001E790:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E7B0;
    }
}

loc_8001E794:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1798));
}

loc_8001E798:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E7B8;
    }
}

loc_8001E79C:
{
    goto loc_8001E7C0;
}

loc_8001E7A0:
{
    r31 = 0;
    goto loc_8001E7C4;
}

loc_8001E7A8:
{
    r31 = 33;
    goto loc_8001E7C4;
}

loc_8001E7B0:
{
    r31 = 34;
    goto loc_8001E7C4;
}

loc_8001E7B8:
{
    r31 = 32;
    goto loc_8001E7C4;
}

loc_8001E7C0:
{
    r31 = 1;
}

loc_8001E7C4:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 128;
    r4 = 64;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r5 = (r3 + 1);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = (r5 + 1);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->lr = 0x8001E808u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C93Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFCF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8001E768 func_8001E768 preserves=true fpr_mask=0x00000000
