#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CE1D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801CE1D4;

loc_801CE1D4:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CE1E0:
{
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CE1F8;
    }
}

loc_801CE1E8:
{
    r3 = 0x801D0000u;
    r3 = (r3 + -7728);
    ctx->lr = 0x801CE1F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013A1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801CE33C;
}

loc_801CE1F8:
{
    r3 = MemoryInline::FlatRead32((r13 + -24452));
    r0 = 251;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(251));
}

loc_801CE204:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CE20C;
    }
}

loc_801CE208:
{
    r0 = r3;
}

loc_801CE20C:
{
    r5 = MemoryInline::FlatRead32((r13 + -24460));
    r7 = (r0 & 255);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801CE218:
{
    r6 = 0;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_801CE314;
    }
}

loc_801CE23C:
{
}

loc_801CE240:
{
    r4 = (r7 + -8);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_801CE2DC;
    }
}

loc_801CE248:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801CE264;
    }
}

loc_801CE250:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_801CE25C:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_801CE264;
    }
}

loc_801CE260:
{
    r5 = 1;
}

loc_801CE264:
{
}

loc_801CE268:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801CE2DC;
    }
}

loc_801CE26C:
{
    r0 = (r4 + 7);
    r5 = 0x802A0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    r8 = (r1 + 8);
    r5 = (r5 + 908);
    ctr = r0;
}

loc_801CE288:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_801CE2DC;
    }
}

loc_801CE28C:
{
    r4 = (r5 + r6);
    r6 = (r6 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 8), 0, 8u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 9));
    guest_range_1 = MemoryInline::ResolveRangeHost((r8 + 4), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r8 + 4), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r8 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r8 + 6), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r8 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r8 + 8), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r8 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r8 + 10), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r8 + 11), static_cast<uint8_t>(r0));
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801CE28C;
    }
}

loc_801CE2DC:
{
    r5 = (r1 + 8);
    r4 = 0x802A0000u;
    r0 = (r7 - r6);
    r5 = (r5 + r6);
    r4 = (r4 + 908);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r7));
}

loc_801CE2F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CE314;
    }
}

loc_801CE2FC:
{
    r3 = (r4 + r6);
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801CE2FC;
    }
}

loc_801CE314:
{
    r3 = 65536;
    r0 = (r7 + 4);
    r3 = (r3 + -948);
    r6 = 0x801D0000u;
    MemoryInline::FlatWrite32((r13 + -24456), r7);
    r3 = (r3 & 65535);
    r4 = (r0 & 255);
    r5 = (r1 + 8);
    r6 = (r6 + -7348);
    ctx->lr = 0x801CE33Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013B1B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801CE33C:
{
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801CE1D4 func_801CE1D4 preserves=true fpr_mask=0x00000000
