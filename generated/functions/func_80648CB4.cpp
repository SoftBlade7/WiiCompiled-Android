#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80648CB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80648CB4;

loc_80648CB4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    r4 = -1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_80648CE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648D94;
    }
}

loc_80648CE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648D2C;
    }
}

loc_80648CEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(125));
}

loc_80648CF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648D80;
    }
}

loc_80648CF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648D20;
    }
}

loc_80648CF8:
{
}

loc_80648CFC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(91))) {
        goto loc_80648D14;
    }
}

loc_80648D00:
{
}

loc_80648D04:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(88))) {
        goto loc_80648D94;
    }
}

loc_80648D08:
{
}

loc_80648D0C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(85))) {
        goto loc_80648D68;
    }
}

loc_80648D10:
{
    goto loc_80648D94;
}

loc_80648D14:
{
}

loc_80648D18:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(94))) {
        goto loc_80648D94;
    }
}

loc_80648D1C:
{
    goto loc_80648D68;
}

loc_80648D20:
{
}

loc_80648D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(127))) {
        goto loc_80648D94;
    }
}

loc_80648D28:
{
    goto loc_80648D88;
}

loc_80648D2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(161));
}

loc_80648D30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648D80;
    }
}

loc_80648D34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648D50;
    }
}

loc_80648D38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(135));
}

loc_80648D3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648D88;
    }
}

loc_80648D40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648D94;
    }
}

loc_80648D44:
{
}

loc_80648D48:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(133))) {
        goto loc_80648D94;
    }
}

loc_80648D4C:
{
    goto loc_80648D70;
}

loc_80648D50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(165));
}

loc_80648D54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648D78;
    }
}

loc_80648D58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648D94;
    }
}

loc_80648D5C:
{
}

loc_80648D60:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(163))) {
        goto loc_80648D94;
    }
}

loc_80648D64:
{
    goto loc_80648D90;
}

loc_80648D68:
{
    r4 = 65;
    goto loc_80648D94;
}

loc_80648D70:
{
    r4 = 122;
    goto loc_80648D94;
}

loc_80648D78:
{
    r4 = 158;
    goto loc_80648D94;
}

loc_80648D80:
{
    r4 = -1;
    goto loc_80648D94;
}

loc_80648D88:
{
    r4 = 122;
    goto loc_80648D94;
}

loc_80648D90:
{
    r4 = 158;
}

loc_80648D94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80648D98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648DD0;
    }
}

loc_80648D9C:
{
    r31 = 0x809C0000u;
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    ctx->lr = 0x80648DACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r31 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = r30;
    ctx->lr = 0x80648DB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x805BDF88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = PPC_Fctiwz(f1.d);
    r3 = r31;
    r5 = 255;
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r4 = fctiwzword0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635AC8u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_80648DD0:
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
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80648CB4 func_80648CB4 preserves=true fpr_mask=0x00000000
