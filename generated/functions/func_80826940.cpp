#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80826940(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_808269C0_loc_0 = 0;
    uint32_t addr_lhax_80826A00_loc_0 = 0;
    uint32_t addr_lhax_80826A38_loc_0 = 0;
    uint32_t addr_lhax_80826A74_loc_0 = 0;
    uint32_t addr_lhax_80826AB0_loc_0 = 0;
    uint32_t addr_lhax_80826AEC_loc_0 = 0;
    uint32_t addr_lhax_80826B28_loc_0 = 0;
    uint32_t addr_lhax_80826B64_loc_0 = 0;
    uint32_t addr_lhax_80826BA0_loc_0 = 0;
    uint32_t addr_lhax_80826BDC_loc_0 = 0;
    uint32_t addr_lhax_80826C18_loc_0 = 0;
    uint32_t addr_lhax_80826C54_loc_0 = 0;
    uint32_t addr_lhax_80826C90_loc_0 = 0;
    uint32_t addr_lhax_80826CCC_loc_0 = 0;
    uint32_t addr_lhax_80826D08_loc_0 = 0;
    uint32_t addr_lhax_80826D44_loc_0 = 0;
    uint32_t addr_lhax_80826D80_loc_0 = 0;
    uint32_t addr_lhax_80826DC4_loc_0 = 0;
    uint32_t addr_lhax_80826E08_loc_0 = 0;
    uint32_t addr_lhax_80826E4C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r15_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80826940;

loc_80826940:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32(r4);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r14);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r16);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r18);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r22);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r24);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r26);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r28);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r30);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r31);
    }
    r31 = 0x808B0000u;
    r31 = (r31 + -17620);
    r14 = 1;
    r30 = 1;
    r29 = 1;
    r28 = 1;
    r27 = 1;
    r26 = 1;
    r25 = 1;
    r24 = 1;
    r23 = 1;
    r22 = 1;
    r21 = 1;
    r20 = 1;
    r19 = 1;
    r18 = 1;
    r17 = 1;
    r4 = MemoryInline::FlatRead32((r5 + 17200));
    r0 = MemoryInline::FlatRead16(r3);
    r16 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r31 + 2278);
    r15_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r15 = (r15_rot_0 & -2);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r16 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r1 + 11), static_cast<uint8_t>(r0));
    r0 = 1;
    addr_lhax_808269C0_loc_0 = (r3 + r15);
    r3 = MemoryInline::FlatRead16(addr_lhax_808269C0_loc_0);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 10), static_cast<uint8_t>(r0));
    r0 = 1;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r1 + 9), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 8), static_cast<uint8_t>(r0));
    r0 = (r3 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808269F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80826A20;
    }
}

loc_808269F4:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    r4 = (r31 + 2284);
    r5 = MemoryInline::FlatRead32((r16 + 8));
    addr_lhax_80826A00_loc_0 = (r3 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826A00_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826A18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826A20;
    }
}

loc_80826A1C:
{
    r17 = 0;
}

loc_80826A20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(0));
}

loc_80826A24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826A5C;
    }
}

loc_80826A28:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826A38_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826A38_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2290);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826A54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826A5C;
    }
}

loc_80826A58:
{
    r18 = 0;
}

loc_80826A5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_80826A60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826A98;
    }
}

loc_80826A64:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826A74_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826A74_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2296);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826A90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826A98;
    }
}

loc_80826A94:
{
    r19 = 0;
}

loc_80826A98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_80826A9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826AD4;
    }
}

loc_80826AA0:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826AB0_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826AB0_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2306);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826ACC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826AD4;
    }
}

loc_80826AD0:
{
    r20 = 0;
}

loc_80826AD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_80826AD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826B10;
    }
}

loc_80826ADC:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826AEC_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826AEC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2317);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826B08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826B10;
    }
}

loc_80826B0C:
{
    r21 = 0;
}

loc_80826B10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_80826B14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826B4C;
    }
}

loc_80826B18:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826B28_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826B28_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2328);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826B44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826B4C;
    }
}

loc_80826B48:
{
    r22 = 0;
}

loc_80826B4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_80826B50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826B88;
    }
}

loc_80826B54:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826B64_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826B64_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2339);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826B80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826B88;
    }
}

loc_80826B84:
{
    r23 = 0;
}

loc_80826B88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80826B8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826BC4;
    }
}

loc_80826B90:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826BA0_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826BA0_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2348);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826BBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826BC4;
    }
}

loc_80826BC0:
{
    r24 = 0;
}

loc_80826BC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80826BC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826C00;
    }
}

loc_80826BCC:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826BDC_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826BDC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2357);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826BF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826C00;
    }
}

loc_80826BFC:
{
    r25 = 0;
}

loc_80826C00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80826C04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826C3C;
    }
}

loc_80826C08:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826C18_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826C18_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2366);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826C34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826C3C;
    }
}

loc_80826C38:
{
    r26 = 0;
}

loc_80826C3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80826C40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826C78;
    }
}

loc_80826C44:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826C54_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826C54_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2376);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826C70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826C78;
    }
}

loc_80826C74:
{
    r27 = 0;
}

loc_80826C78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80826C7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826CB4;
    }
}

loc_80826C80:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826C90_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826C90_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2386);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826CAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826CB4;
    }
}

loc_80826CB0:
{
    r28 = 0;
}

loc_80826CB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80826CB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826CF0;
    }
}

loc_80826CBC:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826CCC_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826CCC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2396);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826CE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826CF0;
    }
}

loc_80826CEC:
{
    r29 = 0;
}

loc_80826CF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80826CF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826D2C;
    }
}

loc_80826CF8:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826D08_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826D08_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2406);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826D24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826D2C;
    }
}

loc_80826D28:
{
    r30 = 0;
}

loc_80826D2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80826D30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826D68;
    }
}

loc_80826D34:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826D44_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826D44_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2418);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826D60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826D68;
    }
}

loc_80826D64:
{
    r14 = 0;
}

loc_80826D68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r14), static_cast<int32_t>(0));
}

loc_80826D6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826DA8;
    }
}

loc_80826D70:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826D80_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826D80_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2429);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826D9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826DA8;
    }
}

loc_80826DA0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_80826DA8:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80826DB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826DEC;
    }
}

loc_80826DB4:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826DC4_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826DC4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2442);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826DE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826DEC;
    }
}

loc_80826DE4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
}

loc_80826DEC:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80826DF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826E30;
    }
}

loc_80826DF8:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826E08_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826E08_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2454);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80826E24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80826E30;
    }
}

loc_80826E28:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
}

loc_80826E30:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80826E38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80826E74;
    }
}

loc_80826E3C:
{
    r4 = MemoryInline::FlatRead32((r16 + 12));
    r3 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r16 + 8));
    r3 = (r3 + -17620);
    addr_lhax_80826E4C_loc_0 = (r4 + r15);
    r0 = MemoryInline::FlatRead16(addr_lhax_80826E4C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + 2466);
    r0 = (r0 * 116);
    r3 = (r5 + r0);
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80826E68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80826E74;
    }
}

loc_80826E6C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_80826E74:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 11), 0, 93u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 13u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 13u, (r1 + 24));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 17u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 21u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 21u, (r1 + 32));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 25u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 29u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 29u, (r1 + 40));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 33u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 37u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 37u, (r1 + 48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 41u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 45u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 45u, (r1 + 56));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 49u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 53u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 53u, (r1 + 64));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 57u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 61u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 61u, (r1 + 72));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 65u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 69u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 69u, (r1 + 80));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 73u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 77u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 77u, (r1 + 88));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 81u, (r1 + 92));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 89u, (r1 + 100));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r1 + 11));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFC1FB gpr_write=0xFFFFC1FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80826940 func_80826940 preserves=true fpr_mask=0x00000000
