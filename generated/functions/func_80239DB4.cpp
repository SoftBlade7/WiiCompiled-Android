#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80239DB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80239DB4;

loc_80239DB4:
{
    r0 = MemoryInline::FlatRead8((r13 + -23824));
    r5 = r3;
}

loc_80239DC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80239DCC;
    }
}

loc_80239DC4:
{
    f2.d = MemoryInline::FlatReadFloat32((r13 + -27744));
    goto loc_80239DD0;
}

loc_80239DCC:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24544));
}

loc_80239DD0:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 32));
    r3 = r4;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 12));
    // inline leaf 0x8006A520 (14 guest instruction(s))
}

loc_inl0_0x8006A520:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x8006A528:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8006A52C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 168), r0);
    MemoryInline::FlatWriteFloat32((r3 + 172), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 176), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f4.d);
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & -241);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    goto loc_inl0_cont_8006A520;
}

loc_inl0_return:
{
}

loc_inl0_cont_8006A520:
{
    // end of inlined leaf 0x8006A520
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203D gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80239DB4 func_80239DB4 preserves=true fpr_mask=0x00000000
