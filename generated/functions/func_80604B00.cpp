#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80604B00(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80604B00;

loc_80604B00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r0 = MemoryInline::FlatRead32((r3 + 3048));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80604B20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80604B38;
    }
}

loc_80604B24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80604B28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80604B90;
    }
}

loc_80604B2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80604B30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80604C38;
    }
}

loc_80604B34:
{
    goto loc_80604C6C;
}

loc_80604B38:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    ctx->lr = 0x80604B48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061BC54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80604B4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80604B58;
    }
}

loc_80604B50:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 3048), r0);
}

loc_80604B58:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    ctx->lr = 0x80604B64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80524788u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80604B68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80604B78;
    }
}

loc_80604B6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80604B70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80604B84;
    }
}

loc_80604B74:
{
    goto loc_80604C6C;
}

loc_80604B78:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 3048), r0);
    goto loc_80604C6C;
}

loc_80604B84:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 3048), r0);
    goto loc_80604C6C;
}

loc_80604B90:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = (r3 + 52);
    ctx->lr = 0x80604BA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061BC54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80604BA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80604C00;
    }
}

loc_80604BA8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 3048), r0);
    r3 = (r31 + 1680);
    r4 = 2;
    // inline leaf 0x8063C830 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C830
    r4 = MemoryInline::FlatRead32(r3);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 16));
    // inline leaf 0x800829D0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800829D0
    r4 = (r3 & 65535);
    r0 = 1127219200;
    r3 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = MemoryInline::FlatReadFloat64((r3 + 27024));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32(r30);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 3052), f0.d);
    goto loc_80604C6C;
}

loc_80604C00:
{
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 896));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80604C14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80604C6C;
    }
}

loc_80604C18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80604C1C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80604C6C;
    }
}

loc_80604C20:
{
    r3 = 0x80890000u;
    r0 = 3;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 26752));
    MemoryInline::FlatWrite32((r31 + 3048), r0);
    MemoryInline::FlatWriteFloat32((r31 + 3052), f0.d);
    goto loc_80604C6C;
}

loc_80604C38:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    ctx->lr = 0x80604C44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805247E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80604C48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80604C58;
    }
}

loc_80604C4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80604C50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80604C64;
    }
}

loc_80604C54:
{
    goto loc_80604C6C;
}

loc_80604C58:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 3048), r0);
    goto loc_80604C6C;
}

loc_80604C64:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 3048), r0);
}

loc_80604C6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80604B00 func_80604B00 preserves=true fpr_mask=0x00000000
