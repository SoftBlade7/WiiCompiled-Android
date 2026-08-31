#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000F640(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8000F640;

loc_8000F640:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r7 = 0;
    r6 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r8 = 1;
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(37));
}

loc_8000F664:
{
    r31 = (r3 + 1);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 40), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 36), r29);
    r29 = r4;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r1 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r1 + 9), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r1 + 10), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r1 + 11), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r1 + 12), static_cast<uint8_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r7);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000F6BC;
    }
}

loc_8000F698:
{
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    r3 = (r31 + 1);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32((r5 + 8), r7);
    MemoryInline::FlatWrite32((r5 + 12), r7);
    goto loc_8000FBE0;
}

loc_8000F6BC:
{
    r0 = 2;
}

loc_8000F6C0:
{
}

loc_8000F6C4:
{
    r4 = 1;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(45))) {
        goto loc_8000F6F0;
    }
}

loc_8000F6CC:
{
}

loc_8000F6D0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(43))) {
        goto loc_8000F6F8;
    }
}

loc_8000F6D4:
{
}

loc_8000F6D8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_8000F700;
    }
}

loc_8000F6DC:
{
}

loc_8000F6E0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(35))) {
        goto loc_8000F714;
    }
}

loc_8000F6E4:
{
}

loc_8000F6E8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(48))) {
        goto loc_8000F71C;
    }
}

loc_8000F6EC:
{
    goto loc_8000F730;
}

loc_8000F6F0:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    goto loc_8000F734;
}

loc_8000F6F8:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r8));
    goto loc_8000F734;
}

loc_8000F700:
{
    r3 = MemoryInline::FlatRead8((r1 + 9));
}

loc_8000F708:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8000F734;
    }
}

loc_8000F70C:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    goto loc_8000F734;
}

loc_8000F714:
{
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r8));
    goto loc_8000F734;
}

loc_8000F71C:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8000F724:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000F734;
    }
}

loc_8000F728:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    goto loc_8000F734;
}

loc_8000F730:
{
    r4 = 0;
}

loc_8000F734:
{
}

loc_8000F738:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8000F748;
    }
}

loc_8000F73C:
{
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    goto loc_8000F6C0;
}

loc_8000F748:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(42));
}

loc_8000F74C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000F788;
    }
}

loc_8000F750:
{
    r3 = r29;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_8000F768:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8000F77C;
    }
}

loc_8000F76C:
{
    r0 = (0 - r0);
    r3 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_8000F77C:
{
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    goto loc_8000F7EC;
}

loc_8000F788:
{
    r3 = 0x80270000u;
    r3 = (r3 + 4424);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_8000F7B4;
}

loc_8000F798:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 * 10);
    r3 = (r6 + r0);
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + -48);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_8000F7B4:
{
}

loc_8000F7B8:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(255))) {
        goto loc_8000F7C4;
    }
}

loc_8000F7C0:
{
    r0 = 0;
}

loc_8000F7C4:
{
}

loc_8000F7C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000F7D4;
    }
}

loc_8000F7CC:
{
    r0 = 0;
    goto loc_8000F7E4;
}

loc_8000F7D4:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 & 8);
}

loc_8000F7E4:
{
}

loc_8000F7E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000F798;
    }
}

loc_8000F7EC:
{
    r7 = MemoryInline::FlatRead32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(509));
}

loc_8000F7F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000F824;
    }
}

loc_8000F7F8:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r31 + 1);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32(r30, r5);
    MemoryInline::FlatWrite32((r30 + 4), r4);
    MemoryInline::FlatWrite32((r30 + 8), r7);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    goto loc_8000FBE0;
}

loc_8000F824:
{
}

loc_8000F828:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(46))) {
        goto loc_8000F8D8;
    }
}

loc_8000F82C:
{
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(42));
}

loc_8000F840:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000F874;
    }
}

loc_8000F844:
{
    r3 = r29;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_8000F85C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8000F868;
    }
}

loc_8000F860:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
}

loc_8000F868:
{
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    goto loc_8000F8D8;
}

loc_8000F874:
{
    r3 = 0x80270000u;
    r3 = (r3 + 4424);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_8000F8A0;
}

loc_8000F884:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 * 10);
    r3 = (r6 + r0);
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + -48);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_8000F8A0:
{
}

loc_8000F8A4:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(255))) {
        goto loc_8000F8B0;
    }
}

loc_8000F8AC:
{
    r0 = 0;
}

loc_8000F8B0:
{
}

loc_8000F8B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000F8C0;
    }
}

loc_8000F8B8:
{
    r0 = 0;
    goto loc_8000F8D0;
}

loc_8000F8C0:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_6);
    r0 = (r0 & 8);
}

loc_8000F8D0:
{
}

loc_8000F8D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000F884;
    }
}

loc_8000F8D8:
{
}

loc_8000F8DC:
{
    r4 = 1;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(104))) {
        goto loc_8000F910;
    }
}

loc_8000F8E4:
{
}

loc_8000F8E8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(108))) {
        goto loc_8000F93C;
    }
}

loc_8000F8EC:
{
}

loc_8000F8F0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(76))) {
        goto loc_8000F968;
    }
}

loc_8000F8F4:
{
}

loc_8000F8F8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(106))) {
        goto loc_8000F974;
    }
}

loc_8000F8FC:
{
}

loc_8000F900:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(116))) {
        goto loc_8000F980;
    }
}

loc_8000F904:
{
}

loc_8000F908:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(122))) {
        goto loc_8000F98C;
    }
}

loc_8000F90C:
{
    goto loc_8000F998;
}

loc_8000F910:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r3 = 2;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8000F924:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(104))) {
        goto loc_8000F99C;
    }
}

loc_8000F928:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r6 = r3;
    r31 = (r31 + 1);
    goto loc_8000F99C;
}

loc_8000F93C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r3 = 3;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8000F950:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(108))) {
        goto loc_8000F99C;
    }
}

loc_8000F954:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r6 = r3;
    r31 = (r31 + 1);
    goto loc_8000F99C;
}

loc_8000F968:
{
    r0 = 9;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8000F99C;
}

loc_8000F974:
{
    r0 = 6;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8000F99C;
}

loc_8000F980:
{
    r0 = 8;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8000F99C;
}

loc_8000F98C:
{
    r0 = 7;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8000F99C;
}

loc_8000F998:
{
    r4 = 0;
}

loc_8000F99C:
{
}

loc_8000F9A0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8000F9AC;
    }
}

loc_8000F9A4:
{
    r31 = (r31 + 1);
    r6 = MemoryInline::FlatRead8(r31);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_8000F9AC:
{
    r0 = (r6 + -65);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(55));
}

loc_8000F9B8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8000FBB4;
    }
}

loc_8000F9BC:
{
    r3 = 0x80270000u;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + 4496);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8000FA64u:
        goto loc_8000FA64;
        break;
    case 0x8000FBB4u:
        goto loc_8000FBB4;
        break;
    case 0x8000FAC4u:
        goto loc_8000FAC4;
        break;
    case 0x8000FA1Cu:
        goto loc_8000FA1C;
        break;
    case 0x8000FAB0u:
        goto loc_8000FAB0;
        break;
    case 0x8000F9D4u:
        goto loc_8000F9D4;
        break;
    case 0x8000FB38u:
        goto loc_8000FB38;
        break;
    case 0x8000FB9Cu:
        goto loc_8000FB9C;
        break;
    case 0x8000FB14u:
        goto loc_8000FB14;
        break;
    case 0x8000FB70u:
        goto loc_8000FB70;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8000F9D4:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_8000F9DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000F9EC;
    }
}

loc_8000F9E0:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8000FBBC;
}

loc_8000F9EC:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000F9F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FA04;
    }
}

loc_8000F9F8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_8000FBBC;
}

loc_8000FA04:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8000FA0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FBBC;
    }
}

loc_8000FA10:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    goto loc_8000FBBC;
}

loc_8000FA1C:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8000FA2C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000FA40;
    }
}

loc_8000FA30:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_8000FA34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FA40;
    }
}

loc_8000FA38:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_8000FA3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FA4C;
    }
}

loc_8000FA40:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8000FBBC;
}

loc_8000FA4C:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000FA54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FBBC;
    }
}

loc_8000FA58:
{
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_8000FBBC;
}

loc_8000FA64:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8000FA6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000FA78;
    }
}

loc_8000FA70:
{
    r0 = 13;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_8000FA78:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8000FA88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000FAA4;
    }
}

loc_8000FA8C:
{
    r0 = (r3 + 255);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8000FA98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000FAA4;
    }
}

loc_8000FA9C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_8000FAA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FBBC;
    }
}

loc_8000FAA4:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8000FBBC;
}

loc_8000FAB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_8000FAB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000FAC4;
    }
}

loc_8000FABC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_8000FAC4:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8000FAD4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000FAF0;
    }
}

loc_8000FAD8:
{
    r0 = (r3 + 255);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8000FAE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000FAF0;
    }
}

loc_8000FAE8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_8000FAEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FAFC;
    }
}

loc_8000FAF0:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8000FBBC;
}

loc_8000FAFC:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000FB04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FBBC;
    }
}

loc_8000FB08:
{
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_8000FBBC;
}

loc_8000FB14:
{
    r5 = 120;
    r4 = 1;
    r3 = 3;
    r0 = 8;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_8000FBBC;
}

loc_8000FB38:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
}

loc_8000FB40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FB50;
    }
}

loc_8000FB44:
{
    r0 = 5;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8000FBBC;
}

loc_8000FB50:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000FB58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FB64;
    }
}

loc_8000FB5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000FB60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FBBC;
    }
}

loc_8000FB64:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8000FBBC;
}

loc_8000FB70:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8000FB78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FB88;
    }
}

loc_8000FB7C:
{
    r0 = 5;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_8000FBBC;
}

loc_8000FB88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000FB8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FBBC;
    }
}

loc_8000FB90:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8000FBBC;
}

loc_8000FB9C:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_8000FBA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FBBC;
    }
}

loc_8000FBA8:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8000FBBC;
}

loc_8000FBB4:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
}

loc_8000FBBC:
{
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r31 + 1);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32(r30, r6);
    MemoryInline::FlatWrite32((r30 + 4), r5);
    MemoryInline::FlatWrite32((r30 + 8), r4);
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_8000FBE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0000FFB gpr_write=0xE0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000F640 func_8000F640 preserves=true fpr_mask=0x00000000
