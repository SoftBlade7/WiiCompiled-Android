#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80590570(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80590570;

loc_80590570:
{
    r4 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 & -2147483648);
}

loc_80590580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805905E4;
    }
}

loc_80590584:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80590594:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80590598:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805905A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805905A4:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805905AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805905B0:
{
    r4 = MemoryInline::FlatRead32(r4);
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = 0x80890000u;
    r0 = MemoryInline::FlatRead8((r4 + 16));
    r4 = 25;
    r6 = MemoryInline::FlatRead32((r5 + 12));
    r5 = 1;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 7260));
    r6_addr_0 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_0);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80521A34u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_805905E4:
{
    r6 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r6 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805905EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805905F0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80590600:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80590604:
{
    r0 = (r6 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80590608:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8059060C:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80590614:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80590618:
{
    r4 = MemoryInline::FlatRead32(r4);
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = 0x80890000u;
    r0 = MemoryInline::FlatRead8((r4 + 16));
    r4 = 29;
    r6 = MemoryInline::FlatRead32((r5 + 12));
    r5 = 1;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 7260));
    r6_addr_1 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_1);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80521A34u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80590570 func_80590570 preserves=true fpr_mask=0x00000000
