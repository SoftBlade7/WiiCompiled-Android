#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070B1D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8070B1D0;

loc_8070B1D0:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = MemoryInline::FlatRead32((r4 + 2920));
}

loc_8070B1E0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(6))) {
        goto loc_8070B1EC;
    }
}

loc_8070B1E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(35));
}

loc_8070B1E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070B1EC:
{
    r4 = MemoryInline::FlatRead32((r3 + 220));
    r4 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8070B200:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070B244;
    }
}

loc_8070B204:
{
    r4 = MemoryInline::FlatRead16((r3 + 208));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 208), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_8070B218:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070B21C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(6));
}

loc_8070B220:
{
    r4 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070B22C;
    }
}

loc_8070B228:
{
    r4 = 697;
}

loc_8070B22C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5856));
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070B244:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 208), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x00001031 gpr_return=0x00000010 fpr_read=0xFFFFFFFD fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8070B1D0 func_8070B1D0 preserves=true fpr_mask=0x00000000
