#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80148020(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80148020;

loc_80148020:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 65536;
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 + -1);
    r5 = 640;
    r3 = 17;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80250000u;
    r4 = (r31 + -13792);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x80340000u;
    r30 = (r30 + -28872);
    MemoryInline::FlatWriteRam8((r30 + 838), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r30 + 840), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r30 + 868), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r30 + 870), static_cast<uint16_t>(r0));
    ctx->lr = 0x8014806Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014A060u>(ctx);
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
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80148070:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80148098;
    }
}

loc_80148074:
{
    r0 = MemoryInline::FlatRead8((r30 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8014807C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80148090;
    }
}

loc_80148080:
{
    r4 = 0x80280000u;
    r3 = 1966080;
    r4 = (r4 + 20664);
    ctx->lr = 0x80148090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131740u>(ctx);
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
}

loc_80148090:
{
    r3 = 14;
    goto loc_80148160;
}

loc_80148098:
{
    r4 = (r31 + -13792);
    r3 = 19;
    ctx->lr = 0x801480A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014A060u>(ctx);
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
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801480A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801480D8;
    }
}

loc_801480AC:
{
    r3 = 17;
    ctx->lr = 0x801480B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014A1FCu>(ctx);
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
    r0 = MemoryInline::FlatRead8((r30 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801480BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801480D0;
    }
}

loc_801480C0:
{
    r4 = 0x80280000u;
    r3 = 1966080;
    r4 = (r4 + 20696);
    ctx->lr = 0x801480D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131740u>(ctx);
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
}

loc_801480D0:
{
    r3 = 14;
    goto loc_80148160;
}

loc_801480D8:
{
    r0 = 0;
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 797u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r30, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r30 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r30 + 52), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r30 + 68), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 104u, (r30 + 104), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 120u, (r30 + 120), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 156u, (r30 + 156), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 172u, (r30 + 172), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 208u, (r30 + 208), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 224u, (r30 + 224), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 260u, (r30 + 260), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 276u, (r30 + 276), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 312u, (r30 + 312), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 328u, (r30 + 328), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 364u, (r30 + 364), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 380u, (r30 + 380), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 416u, (r30 + 416), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 432u, (r30 + 432), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 468u, (r30 + 468), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 484u, (r30 + 484), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 520u, (r30 + 520), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 536u, (r30 + 536), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 572u, (r30 + 572), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 588u, (r30 + 588), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 624u, (r30 + 624), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 640u, (r30 + 640), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 676u, (r30 + 676), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 692u, (r30 + 692), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 728u, (r30 + 728), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 744u, (r30 + 744), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 780u, (r30 + 780), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 796u, (r30 + 796), static_cast<uint8_t>(r0));
}

loc_80148160:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80148020 func_80148020 preserves=true fpr_mask=0x00000000
