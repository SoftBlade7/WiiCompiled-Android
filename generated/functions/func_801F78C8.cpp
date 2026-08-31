#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F78C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F78C8;

loc_801F78C8:
{
}

loc_801F78CC:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801F78DC;
    }
}

loc_801F78D0:
{
    r10 = 983040;
    r0 = (r10 + 16959);
    MemoryInline::FlatWrite32(r9, r0);
}

loc_801F78DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801F78E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F78F0;
    }
}

loc_801F78E4:
{
    r0 = MemoryInline::FlatRead32((r5 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F78EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F78F8;
    }
}

loc_801F78F0:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

loc_801F78F8:
{
}

loc_801F78FC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801F7914;
    }
}

loc_801F7900:
{
    r0 = MemoryInline::FlatRead32(r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F7908:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7914;
    }
}

loc_801F790C:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

loc_801F7914:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F7918:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F7924;
    }
}

loc_801F791C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(21));
}

loc_801F7920:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801F792C;
    }
}

loc_801F7924:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

loc_801F792C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FA374u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F78C8 func_801F78C8 preserves=true fpr_mask=0x00000000
