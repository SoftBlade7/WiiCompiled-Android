#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085DC44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085DC44;

loc_8085DC44:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRam32((r1 + 252), r31);
    r31 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8085DC64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085DC70;
    }
}

loc_8085DC68:
{
    r3 = 39;
    goto loc_8085DE20;
}

loc_8085DC70:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 964));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_8085DC84:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8085DE1C;
    }
}

loc_8085DC88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(36));
}

loc_8085DC8C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8085DE1C;
    }
}

loc_8085DC90:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    // inline leaf 0x80676860 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -30284));
    // end of inlined leaf 0x80676860
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_8085DCA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085DE1C;
    }
}

loc_8085DCA4:
{
    r3 = (r1 + 32);
    ctx->lr = 0x8085DCACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r31 + -10456));
    r3 = (r1 + 32);
    r4 = MemoryInline::FlatRead32((r4 + 3084));
    ctx->lr = 0x8085DCBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 32));
    r3 = 0;
}

loc_8085DCC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8085DCDC;
    }
}

loc_8085DCCC:
{
    r0 = MemoryInline::FlatRead32((r1 + 244));
}

loc_8085DCD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8085DCDC;
    }
}

loc_8085DCD8:
{
    r3 = 1;
}

loc_8085DCDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8085DCE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085DE04;
    }
}

loc_8085DCE4:
{
    r8 = MemoryInline::FlatRead16((r1 + 200));
    r9 = 0x808B0000u;
    r0 = 0;
    r7 = MemoryInline::FlatRead8((r1 + 202));
    r9 = (r9 + 11588);
    r6 = MemoryInline::FlatRead16((r1 + 204));
    r5 = MemoryInline::FlatRead8((r1 + 206));
    r3 = 0x809C0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 23u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r9);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r1 + 24), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r1 + 26), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r1 + 28), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r1 + 30), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r9);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 16), static_cast<uint16_t>(r0));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead32((r3 + 64));
    r0 = MemoryInline::FlatRead8((r3 + 10));
    r5 = MemoryInline::FlatRead16((r3 + 4));
    r4 = MemoryInline::FlatRead8((r3 + 6));
}

loc_8085DD60:
{
    r3 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085DD80;
    }
}

loc_8085DD78:
{
    r0 = 0;
    goto loc_8085DDDC;
}

loc_8085DD80:
{
    r0 = MemoryInline::FlatRead8((r1 + 30));
}

loc_8085DD88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085DD94;
    }
}

loc_8085DD8C:
{
    r0 = 1;
    goto loc_8085DDDC;
}

loc_8085DD94:
{
    r0 = MemoryInline::FlatRead16((r1 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8085DD9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085DDA8;
    }
}

loc_8085DDA0:
{
    r0 = 1;
    goto loc_8085DDDC;
}

loc_8085DDA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085DDD8;
    }
}

loc_8085DDAC:
{
    r0 = MemoryInline::FlatRead8((r1 + 26));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8085DDB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085DDC0;
    }
}

loc_8085DDB8:
{
    r0 = 1;
    goto loc_8085DDDC;
}

loc_8085DDC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085DDD8;
    }
}

loc_8085DDC4:
{
    r0 = MemoryInline::FlatRead16((r1 + 28));
}

loc_8085DDCC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8085DDD8;
    }
}

loc_8085DDD0:
{
    r0 = 1;
    goto loc_8085DDDC;
}

loc_8085DDD8:
{
    r0 = 0;
}

loc_8085DDDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8085DDE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085DE04;
    }
}

loc_8085DDE4:
{
    r4 = 0x80520000u;
    r3 = (r1 + 136);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x8085DDFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 41;
    goto loc_8085DE20;
}

loc_8085DE04:
{
    r4 = 0x80520000u;
    r3 = (r1 + 136);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x8085DE1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8085DE1C:
{
    r3 = 33;
}

loc_8085DE20:
{
    r0 = MemoryInline::FlatRead32((r1 + 260));
    r31 = MemoryInline::FlatRead32((r1 + 252));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8085DC44 func_8085DC44 preserves=true fpr_mask=0x00000000
