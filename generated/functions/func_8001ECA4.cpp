#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001ECA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001ECA4;

loc_8001ECA4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001ED80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8001ECC0:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8001ECD0;
    }
}

loc_8001ECC8:
{
    // inline leaf 0x8001EB08 (9 guest instruction(s))
    r3 = 0x802A0000u;
    r5 = 0;
    r4 = (r3 + 25504);
    r0 = 256;
    MemoryInline::FlatWriteRam32((r3 + 25504), r5);
    r3 = 0;
    MemoryInline::FlatWriteRam32((r4 + 4), r5);
    MemoryInline::FlatWriteRam32((r4 + 32), r0);
    // end of inlined leaf 0x8001EB08
    r31 = r3;
}

loc_8001ECD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8001ECD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001ECE0;
    }
}

loc_8001ECD8:
{
    // inline leaf 0x8001D15C (8 guest instruction(s))
    r3 = 0x802A0000u;
    r0 = 0;
    r4 = (r3 + 18936);
    MemoryInline::FlatWriteRam32((r3 + 18936), r0);
    r3 = 0;
    MemoryInline::FlatWriteRam32((r4 + 2188), r0);
    MemoryInline::FlatWriteRam32((r4 + 4376), r0);
    // end of inlined leaf 0x8001D15C
    r31 = r3;
}

loc_8001ECE0:
{
    ctx->lr = 0x8001ECE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C9B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001ECE8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8001ECF4;
    }
}

loc_8001ECEC:
{
    // inline leaf 0x8001EF2C (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x8001EF2C
    r31 = r3;
}

loc_8001ECF4:
{
}

loc_8001ECF8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8001ED04;
    }
}

loc_8001ECFC:
{
    ctx->lr = 0x8001ED00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8001C618u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    r31 = r3;
}

loc_8001ED04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8001ED08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001ED34;
    }
}

loc_8001ED0C:
{
    r3 = 1;
    r4 = 0;
    r5 = (r13 + -27504);
    ctx->lr = 0x8001ED1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C86Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -27504));
    // inline leaf 0x80020C60 (4 guest instruction(s))
    r4 = 0x802A0000u;
    r4 = (r4 + 25744);
    MemoryInline::FlatWriteRam32((r4 + 160), r3);
    // end of inlined leaf 0x80020C60
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8001ED2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001ED34;
    }
}

loc_8001ED30:
{
    r31 = r30;
}

loc_8001ED34:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
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
// RECOMP_REGISTRATION base 0x8001ECA4 func_8001ECA4 preserves=true fpr_mask=0x00000000
