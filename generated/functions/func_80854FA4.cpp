#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80854FA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80854FA4;

loc_80854FA4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
}

loc_80854FB8:
{
    r3 = r31;
    ctx->lr = 0x80854FC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80860F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80854FC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80854FCC;
    }
}

loc_80854FC8:
{
    goto loc_80854FDC;
}

loc_80854FCC:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(61));
}

loc_80854FD4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80854FB8;
    }
}

loc_80854FD8:
{
    r31 = -1;
}

loc_80854FDC:
{
}

loc_80854FE0:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(35))) {
        goto loc_80855004;
    }
}

loc_80854FE4:
{
}

loc_80854FE8:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(17))) {
        goto loc_80854FF8;
    }
}

loc_80854FEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80854FF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80855018;
    }
}

loc_80854FF4:
{
    goto loc_80855038;
}

loc_80854FF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(32));
}

loc_80854FFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80855028;
    }
}

loc_80855000:
{
    goto loc_80855020;
}

loc_80855004:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(61));
}

loc_80855008:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80855038;
    }
}

loc_8085500C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(37));
}

loc_80855010:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80855030;
    }
}

loc_80855014:
{
    goto loc_80855020;
}

loc_80855018:
{
    r3 = 147;
    goto loc_808550A8;
}

loc_80855020:
{
    r3 = 144;
    goto loc_808550A8;
}

loc_80855028:
{
    r3 = 146;
    goto loc_808550A8;
}

loc_80855030:
{
    r3 = 145;
    goto loc_808550A8;
}

loc_80855038:
{
    r31 = 0;
}

loc_8085503C:
{
    r3 = r31;
    ctx->lr = 0x80855044u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x808628A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80855048:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80855050;
    }
}

loc_8085504C:
{
    goto loc_80855060;
}

loc_80855050:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(58));
}

loc_80855058:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8085503C;
    }
}

loc_8085505C:
{
    r31 = 58;
}

loc_80855060:
{
    r0 = (r31 + -34);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
}

loc_80855068:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808550A4;
    }
}

loc_8085506C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(11));
}

loc_80855070:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80855094;
    }
}

loc_80855074:
{
    r0 = (r31 + -12);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8085507C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8085509C;
    }
}

loc_80855080:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(52));
}

loc_80855084:
{
    r3 = -1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808550A8;
    }
}

loc_8085508C:
{
    r3 = 147;
    goto loc_808550A8;
}

loc_80855094:
{
    r3 = 144;
    goto loc_808550A8;
}

loc_8085509C:
{
    r3 = 146;
    goto loc_808550A8;
}

loc_808550A4:
{
    r3 = 145;
}

loc_808550A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80854FA4 func_80854FA4 preserves=true fpr_mask=0x00000000
