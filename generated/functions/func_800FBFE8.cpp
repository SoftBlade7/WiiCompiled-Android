#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FBFE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800FBFE8;

loc_800FBFE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FBFF4:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FC01C;
    }
}

loc_800FC010:
{
    r6 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800FC018:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FC024;
    }
}

loc_800FC01C:
{
    r3 = 2;
    goto loc_800FC1A4;
}

loc_800FC024:
{
    r0 = MemoryInline::FlatRead32((r6 + 264));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FC02C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FC048;
    }
}

loc_800FC030:
{
    r3 = r31;
    r4 = 0;
    r5 = 532;
    ctx->lr = 0x800FC040u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_800FC1A4;
}

loc_800FC048:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800FC04C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FC064;
    }
}

loc_800FC050:
{
    r4 = 0x80280000u;
    r4 = (r4 + -20424);
    ctx->lr = 0x800FC05Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80109380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 2;
    goto loc_800FC1A4;
}

loc_800FC064:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800FC068:
{
    r0 = MemoryInline::FlatRead32((r6 + 1488));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FC078;
    }
}

loc_800FC070:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_800FC074:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FC090;
    }
}

loc_800FC078:
{
    r4 = 0x80280000u;
    r3 = r29;
    r4 = (r4 + -20408);
    ctx->lr = 0x800FC088u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80109380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 2;
    goto loc_800FC1A4;
}

loc_800FC090:
{
    ctx->lr = 0x800FC094u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80106518u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FC098:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FC0B8;
    }
}

loc_800FC0A0:
{
    r4 = 0x80280000u;
    r3 = r29;
    r4 = (r4 + -20408);
    ctx->lr = 0x800FC0B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80109380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 2;
    goto loc_800FC1A4;
}

loc_800FC0B8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 16u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
}

loc_800FC0C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800FC118;
    }
}

loc_800FC0C4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FC0CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FC118;
    }
}

loc_800FC0D0:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r31 + 4), r4);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 264), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::FlatWrite32((r31 + 520), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    r0 = MemoryInline::FlatRead16((r4 + 32));
    MemoryInline::FlatWrite32((r31 + 524), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    MemoryInline::FlatWrite32((r31 + 528), r0);
    goto loc_800FC1A0;
}

loc_800FC118:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800FC138:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FC14C;
    }
}

loc_800FC13C:
{
    r3 = (r31 + 8);
    r5 = 256;
    ctx->lr = 0x800FC148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800FC154;
}

loc_800FC14C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
}

loc_800FC154:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800FC160:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FC174;
    }
}

loc_800FC164:
{
    r3 = (r31 + 264);
    r5 = 256;
    ctx->lr = 0x800FC170u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800FC17C;
}

loc_800FC174:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 264), static_cast<uint8_t>(r0));
}

loc_800FC17C:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite32((r31 + 520), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead16((r3 + 20));
    MemoryInline::FlatWrite32((r31 + 524), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWrite32((r31 + 528), r0);
}

loc_800FC1A0:
{
    r3 = 0;
}

loc_800FC1A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800FBFE8 func_800FBFE8 preserves=true fpr_mask=0x00000000
