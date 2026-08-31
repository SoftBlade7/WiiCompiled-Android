#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80169CF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80169CF4;

loc_80169CF4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80169D00:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80169E20;
    }
}

loc_80169D18:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 264), 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 264));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80169D20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169D80;
    }
}

loc_80169D24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80169D38;
    }
}

loc_80169D28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80169D2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169D48;
    }
}

loc_80169D30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80169D5C;
    }
}

loc_80169D34:
{
    goto loc_80169E20;
}

loc_80169D38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80169D3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169E10;
    }
}

loc_80169D40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80169E20;
    }
}

loc_80169D44:
{
    goto loc_80169DD8;
}

loc_80169D48:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80169E20;
    }
}

loc_80169D4C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 268));
    r5 = 28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80169E20;
}

loc_80169D5C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80169E20;
    }
}

loc_80169D60:
{
    r0 = (r4 + 63);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 268));
    r4 = (r0 & -32);
    r0 = (r4 + 95);
    r4 = (r0 & -32);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80169E20;
}

loc_80169D80:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80169E20;
    }
}

loc_80169D84:
{
    r0 = (r4 + 95);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 268));
    r5 = (r0 & -32);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 272));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 73));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 276));
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead8((r5 + 70));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 280));
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead8((r5 + 71));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 284));
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead8((r5 + 72));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 288));
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80169E20;
}

loc_80169DD8:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80169E20;
    }
}

loc_80169DDC:
{
    r0 = (r4 + 63);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 268));
    r5 = (r0 & -32);
    r0 = (r5 + 95);
    r6 = (r0 & -32);
    r5 = MemoryInline::FlatRead32(r6);
    r0 = (r6 + 35);
    r6 = (r0 & -32);
    MemoryInline::FlatWrite32(r3, r5);
    r0 = MemoryInline::FlatRead32(r6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 272));
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80169E20;
}

loc_80169E10:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80169E20;
    }
}

loc_80169E14:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 268));
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80169E20:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -25736), r0);
    r12 = MemoryInline::FlatRead32((r31 + 256));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80169E30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169E44;
    }
}

loc_80169E34:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r31 + 260));
    ctr = r12;
    ctx->lr = 0x80169E44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80169E44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80169E48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169E58;
    }
}

loc_80169E4C:
{
    r3 = MemoryInline::FlatRead32((r13 + -25724));
    r4 = r31;
    ctx->lr = 0x80169E58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80194CF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80169E58:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80169CF4 func_80169CF4 preserves=true fpr_mask=0x00000000
