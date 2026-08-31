#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B6B98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807B6B98;

loc_807B6B98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 176));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & -257);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    // inline leaf 0x8079EC44 (21 guest instruction(s))
}

loc_inl0_0x8079EC44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x8079EC48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x8079EC68;
    }
}

loc_inl0_0x8079EC4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 60));
    goto loc_inl0_0x8079EC80;
}

loc_inl0_0x8079EC68:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
}

loc_inl0_0x8079EC80:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl0_cont_8079EC44:
{
    // end of inlined leaf 0x8079EC44
    r3 = 0x808A0000u;
    r4 = MemoryInline::FlatRead32((r31 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24968));
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B6B98 func_807B6B98 preserves=true fpr_mask=0x00000000
