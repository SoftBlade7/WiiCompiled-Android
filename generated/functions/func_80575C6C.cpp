#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80575C6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80575C6C;

loc_80575C6C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
}

loc_80575C94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80575D38;
    }
}

loc_80575C98:
{
    r0 = MemoryInline::FlatRead32((r3 + 116));
}

loc_80575CA0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80575CB4;
    }
}

loc_80575CA4:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1073741824);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80575CB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80575D38;
    }
}

loc_80575CB4:
{
    r3 = r31;
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6268));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80575CC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80575D38;
    }
}

loc_80575CCC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80575CDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80575D38;
    }
}

loc_80575CE0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r30 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 1073741824);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80575CF0:
{
    r0 = MemoryInline::FlatRead32((r3 + 116));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80575D0C;
    }
}

loc_80575CF8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80575D00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80575D28;
    }
}

loc_80575D04:
{
    r30 = 4;
    goto loc_80575D28;
}

loc_80575D0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80575D10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80575D1C;
    }
}

loc_80575D14:
{
    r30 = 2;
    goto loc_80575D28;
}

loc_80575D1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80575D20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80575D28;
    }
}

loc_80575D24:
{
    r30 = 1;
}

loc_80575D28:
{
    r3 = r31;
    // inline leaf 0x805907A0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x805907A0
    r4 = r30;
    ctx->lr = 0x80575D38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80865050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80575D38:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80575C6C func_80575C6C preserves=true fpr_mask=0x00000000
