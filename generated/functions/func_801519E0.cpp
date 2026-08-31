#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801519E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801519E0;

loc_801519E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 108));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801519FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80151B98;
    }
}

loc_80151A00:
{
    r0 = MemoryInline::FlatRead8((r6 + 114));
}

loc_80151A08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80151AB8;
    }
}

loc_80151A0C:
{
}

loc_80151A10:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80151A84;
    }
}

loc_80151A14:
{
    r0 = MemoryInline::FlatRead16((r3 + 154));
}

loc_80151A1C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_80151A2C;
    }
}

loc_80151A20:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 154), static_cast<uint16_t>(r0));
    goto loc_80151A34;
}

loc_80151A2C:
{
    r0 = (r0 - r5);
    MemoryInline::FlatWrite16((r3 + 154), static_cast<uint16_t>(r0));
}

loc_80151A34:
{
    r4 = MemoryInline::FlatRead16((r3 + 154));
    r0 = MemoryInline::FlatRead16((r3 + 158));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80151A40:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80151B98;
    }
}

loc_80151A44:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80151A4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80151B98;
    }
}

loc_80151A50:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80151A58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80151B98;
    }
}

loc_80151A5C:
{
    r0 = (r0 - r4);
    r3 = MemoryInline::FlatRead32((r3 + 108));
    r4 = MemoryInline::FlatRead8((r31 + 13));
    r5 = (r0 & 255);
    ctx->lr = 0x80151A70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801551E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r31 + 156));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 154), static_cast<uint16_t>(r3));
    goto loc_80151B98;
}

loc_80151A84:
{
    r0 = MemoryInline::FlatRead32((r3 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80151A8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80151A9C;
    }
}

loc_80151A90:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r0));
    goto loc_80151B98;
}

loc_80151A9C:
{
    r4 = MemoryInline::FlatRead16((r3 + 56));
    r0 = MemoryInline::FlatRead16((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80151AA8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80151B98;
    }
}

loc_80151AAC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r0));
    goto loc_80151B98;
}

loc_80151AB8:
{
}

loc_80151ABC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80151B0C;
    }
}

loc_80151AC0:
{
    r0 = MemoryInline::FlatRead8((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80151AC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80151B98;
    }
}

loc_80151ACC:
{
    r0 = MemoryInline::FlatRead32((r3 + 64));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5000));
}

loc_80151AD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80151B98;
    }
}

loc_80151AD8:
{
    r0 = MemoryInline::FlatRead16((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_80151AE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80151B98;
    }
}

loc_80151AE4:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80151AF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80151B98;
    }
}

loc_80151AF8:
{
    r4 = MemoryInline::FlatRead8((r31 + 13));
    r3 = r6;
    r5 = 1;
    ctx->lr = 0x80151B08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80154650u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80151B98;
}

loc_80151B0C:
{
    r0 = MemoryInline::FlatRead32((r3 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80151B14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80151B34;
    }
}

loc_80151B18:
{
    r0 = 1;
    r4 = MemoryInline::FlatRead8((r31 + 13));
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r0));
    r3 = r6;
    r5 = 0;
    ctx->lr = 0x80151B30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80154650u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80151B98;
}

loc_80151B34:
{
    r0 = MemoryInline::FlatRead32((r3 + 64));
}

loc_80151B3C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8000))) {
        goto loc_80151B4C;
    }
}

loc_80151B40:
{
    r0 = MemoryInline::FlatRead16((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
}

loc_80151B48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80151B98;
    }
}

loc_80151B4C:
{
    r0 = MemoryInline::FlatRead8((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80151B54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80151B98;
    }
}

loc_80151B58:
{
    r3 = 0x80340000u;
    r3 = (r3 + -25816);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80151B68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80151B80;
    }
}

loc_80151B6C:
{
    r3 = 589824;
    r4 = 0x80280000u;
    r3 = (r3 + 3);
    r4 = (r4 + 28424);
    ctx->lr = 0x80151B80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80151B80:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r31 + 108));
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r0));
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r31 + 13));
    ctx->lr = 0x80151B98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80154650u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80151B98:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801519E0 func_801519E0 preserves=true fpr_mask=0x00000000
