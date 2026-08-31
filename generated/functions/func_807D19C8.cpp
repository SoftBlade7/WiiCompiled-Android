#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D19C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D19C8;

loc_807D19C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    // inline leaf 0x805918BC (9 guest instruction(s))
}

loc_inl0_0x805918BC:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r3 + 56));
}

loc_inl0_0x805918CC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805918D0:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    goto loc_inl0_cont_805918BC;
}

loc_inl0_return:
{
}

loc_inl0_cont_805918BC:
{
    // end of inlined leaf 0x805918BC
    r0 = MemoryInline::FlatRead8((r31 + 168));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D19E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D1A4C;
    }
}

loc_807D19EC:
{
    r0 = MemoryInline::FlatRead8((r31 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D19F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D1A4C;
    }
}

loc_807D19F8:
{
    r3 = MemoryInline::FlatRead16((r31 + 250));
    r0 = 0;
}

loc_807D1A04:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(8))) {
        goto loc_807D1A10;
    }
}

loc_807D1A08:
{
}

loc_807D1A0C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(10))) {
        goto loc_807D1A28;
    }
}

loc_807D1A10:
{
}

loc_807D1A14:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(21))) {
        goto loc_807D1A2C;
    }
}

loc_807D1A18:
{
}

loc_807D1A1C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(40))) {
        goto loc_807D1A2C;
    }
}

loc_807D1A20:
{
}

loc_807D1A24:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(22))) {
        goto loc_807D1A2C;
    }
}

loc_807D1A28:
{
    r0 = 1;
}

loc_807D1A2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D1A30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D1A4C;
    }
}

loc_807D1A34:
{
    r4 = 0x808A0000u;
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 29076));
    r4 = 20;
    r5 = 1;
    ctx->lr = 0x807D1A4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807CC018u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807D1A4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D19C8 func_807D19C8 preserves=true fpr_mask=0x00000000
