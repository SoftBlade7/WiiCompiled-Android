#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FC874(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807FC874;

loc_807FC874:
{
}

loc_807FC878:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807FC8F0;
    }
}

loc_807FC87C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r7 = 0;
    r0 = (r0 & 256);
}

loc_807FC888:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807FC89C;
    }
}

loc_807FC88C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_807FC894:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_807FC89C;
    }
}

loc_807FC898:
{
    r7 = 1;
}

loc_807FC89C:
{
}

loc_807FC8A0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_807FC8F0;
    }
}

loc_807FC8A4:
{
}

loc_807FC8A8:
{
    r0 = 0;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_807FC8C0;
    }
}

loc_807FC8B0:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807FC8BC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807FC8E4;
    }
}

loc_807FC8C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_807FC8C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807FC8E8;
    }
}

loc_807FC8C8:
{
    r4 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r4 + -21536));
    f2.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807FC8E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FC8E8;
    }
}

loc_807FC8E4:
{
    r0 = 1;
}

loc_807FC8E8:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_807FC8F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807FC8F4:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FC904;
    }
}

loc_807FC8FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_807FC900:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_807FC904:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000099 gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FC874 func_807FC874 preserves=true fpr_mask=0x00000000
