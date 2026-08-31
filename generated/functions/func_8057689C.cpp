#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057689C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8057689C;

loc_8057689C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_805768A8:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6136);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(1))) {
        goto loc_80576920;
    }
}

loc_805768C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r4 = 1;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_805768D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_805768E8;
    }
}

loc_805768DC:
{
}

loc_805768E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805768E8;
    }
}

loc_805768E4:
{
    r4 = 0;
}

loc_805768E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805768EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805768F8;
    }
}

loc_805768F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 136));
    goto loc_805768FC;
}

loc_805768F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 128));
}

loc_805768FC:
{
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80576460u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 | 4194304);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_8057697C;
}

loc_80576920:
{
    r4 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (r4 + -3);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80576930:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8057697C;
    }
}

loc_80576934:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r4 = 6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80576940:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80576950;
    }
}

loc_80576948:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 136));
    goto loc_80576954;
}

loc_80576950:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 128));
}

loc_80576954:
{
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80576460u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 160));
    MemoryInline::FlatWriteFloat32((r30 + 52), f0.d);
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 | 4194304);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8057697C:
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057689C func_8057689C preserves=true fpr_mask=0x00000000
