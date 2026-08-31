#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808699D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808699D8;

loc_808699D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    goto loc_80869A28;
}

loc_80869A00:
{
    r0 = (r6 & 255);
    r6 = (r6 + 1);
    r0 = (r0 * 24);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite8((r4 + 964), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r4 + 968), r5);
    MemoryInline::FlatWrite32((r4 + 972), r5);
    MemoryInline::FlatWrite32((r4 + 976), r5);
    MemoryInline::FlatWrite32((r4 + 980), r5);
    MemoryInline::FlatWrite32((r4 + 984), r5);
}

loc_80869A28:
{
    r0 = MemoryInline::FlatRead8(r3);
    r4 = (r6 & 255);
}

loc_80869A34:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_80869A00;
    }
}

loc_80869A38:
{
    r29 = 0;
    r30 = 5;
    goto loc_80869A70;
}

loc_80869A44:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & 2040);
    r0 = MemoryInline::FlatRead8(r31);
    r3 = (r31 + r3);
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80869A6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = (r29 + 1);
}

loc_80869A70:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r3 = (r29 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80869A7C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80869A44;
    }
}

loc_80869A80:
{
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 1252), 0, 20u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r31 + 1260), static_cast<uint8_t>(r4));
    r3 = 0x809C0000u;
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r31 + 1261), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r31 + 1262), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r31 + 1263), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r31 + 1264), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r31 + 1265), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r31 + 1266), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r31 + 1267), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r31 + 1268), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r31 + 1269), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r31 + 1270), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r31 + 1271), static_cast<uint8_t>(r4));
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r5 + 2932));
    r0 = (r3 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80869AC8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80869AD4;
    }
}

loc_80869ACC:
{
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 1256), r4);
    goto loc_80869B08;
}

loc_80869AD4:
{
    r0 = MemoryInline::FlatRead32((r5 + 2928));
}

loc_80869ADC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_80869AEC;
    }
}

loc_80869AE0:
{
}

loc_80869AE4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80869AEC;
    }
}

loc_80869AE8:
{
    r4 = 1;
}

loc_80869AEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80869AF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80869B00;
    }
}

loc_80869AF4:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 1256), r0);
    goto loc_80869B08;
}

loc_80869B00:
{
    r0 = 120;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 1256), r0);
}

loc_80869B08:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 1252), r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x808699D8 func_808699D8 preserves=true fpr_mask=0x00000000
