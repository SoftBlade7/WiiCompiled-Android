#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130F84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80130F84;

loc_80130F84:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 76;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x80330000u;
    r3 = (r30 + 9440);
    ctx->lr = 0x80130FB0u;
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
    ctx->lr = 0x80130FB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80130288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = (r30 + 9440);
    r0 = 5;
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r13 + -26175));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80130FCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80130FE0;
    }
}

loc_80130FD0:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 40), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r13 + -26175), static_cast<uint8_t>(r0));
}

loc_80130FE0:
{
    ctx->lr = 0x80130FE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80193478u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80130FE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80131174;
    }
}

loc_80130FEC:
{
    ctx->lr = 0x80130FF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B7778u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80130FF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80131174;
    }
}

loc_80130FF8:
{
    r0 = MemoryInline::FlatRead8((r13 + -26164));
    r4 = 0x80330000u;
    r4 = (r4 + 9440);
}

loc_80131008:
{
    MemoryInline::FlatWriteRam32((r4 + 36), r31);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80131024;
    }
}

loc_80131010:
{
    r3 = MemoryInline::FlatRead32((r13 + -26160));
    r0 = MemoryInline::FlatRead32((r13 + -26156));
    MemoryInline::FlatWriteRam32((r4 + 20), r3);
    MemoryInline::FlatWriteRam32((r4 + 24), r0);
    goto loc_80131034;
}

loc_80131024:
{
    r3 = 1406;
    r0 = 773;
    MemoryInline::FlatWriteRam32((r4 + 20), r3);
    MemoryInline::FlatWriteRam32((r4 + 24), r0);
}

loc_80131034:
{
    r0 = MemoryInline::FlatRead32((r13 + -26168));
    r6 = 0x80330000u;
    r6 = (r6 + 9440);
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80131048:
{
    MemoryInline::FlatWriteRam8((r6 + 16), static_cast<uint8_t>(r3));
    r5 = MemoryInline::FlatRead32((r6 + 24));
    MemoryInline::FlatWriteRam8((r6 + 17), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r6 + 20));
    MemoryInline::FlatWriteRam8((r6 + 18), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r6 + 19), static_cast<uint8_t>(r3));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801310A8;
    }
}

loc_80131064:
{
    r3 = MemoryInline::FlatRead32((r13 + -26172));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8013106C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80131088;
    }
}

loc_80131070:
{
    r4 = (r0 & 65535);
    r5 = (r5 & 65535);
    r3 = (r13 + -29672);
    ctx->lr = 0x80131080u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B7A20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r3;
    goto loc_801310BC;
}

loc_80131088:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_8013108C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801310BC;
    }
}

loc_80131090:
{
    r4 = (r0 & 65535);
    r5 = (r5 & 65535);
    r3 = (r13 + -29668);
    ctx->lr = 0x801310A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B7A20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r3;
    goto loc_801310BC;
}

loc_801310A8:
{
    r4 = (r0 & 65535);
    r5 = (r5 & 65535);
    r3 = (r13 + -29668);
    ctx->lr = 0x801310B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B7A20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r3;
}

loc_801310BC:
{
}

loc_801310C0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_801310C8;
    }
}

loc_801310C4:
{
    MemoryInline::FlatWrite32((r13 + -29676), r30);
}

loc_801310C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801310CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80131174;
    }
}

loc_801310D0:
{
    r30 = 0x80330000u;
    r3 = 2;
    r30 = (r30 + 9440);
    r4 = 130;
    r0 = 129;
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 16), 0, 57u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 16), static_cast<uint8_t>(r3));
    r3 = (r30 + 44);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 17), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 18), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 19), static_cast<uint8_t>(r31));
    // inline leaf 0x8012EBA0 (5 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, r3, r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8012EBA0
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r30 + 56), static_cast<uint8_t>(r31));
    r3 = (r30 + 60);
    // inline leaf 0x8012EBA0 (5 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, r3, r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8012EBA0
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r30 + 72), static_cast<uint8_t>(r31));
    r3 = 660;
    r4 = 45;
    r5 = 1;
    r6 = 0;
    ctx->lr = 0x80131124u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012F670u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam8((r30 + 28), static_cast<uint8_t>(r3));
    r3 = 1800;
    r4 = 30;
    r5 = 1;
    r6 = 0;
    ctx->lr = 0x8013113Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012F670u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 28));
    MemoryInline::FlatWriteRam8((r30 + 29), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_80131148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80131174;
    }
}

loc_8013114C:
{
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_80131154:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013115C;
    }
}

loc_80131158:
{
    goto loc_80131174;
}

loc_8013115C:
{
    ctx->lr = 0x80131160u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80130288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = 4;
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -29680), r0);
}

loc_80131174:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80130F84 func_80130F84 preserves=true fpr_mask=0x00000000
