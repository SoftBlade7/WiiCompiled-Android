#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80830D00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80830D00;

loc_80830D00:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    }
    r26 = r3;
    r6 = MemoryInline::FlatRead32((r6 + 7736));
    r6 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead32(r6);
}

loc_80830D28:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(127))) {
        goto loc_80830D34;
    }
}

loc_80830D2C:
{
}

loc_80830D30:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(129))) {
        goto loc_80830D44;
    }
}

loc_80830D34:
{
}

loc_80830D38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(80))) {
        goto loc_80830D44;
    }
}

loc_80830D3C:
{
}

loc_80830D40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(78))) {
        goto loc_80830DBC;
    }
}

loc_80830D44:
{
}

loc_80830D48:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_80830DBC;
    }
}

loc_80830D4C:
{
    r7 = (r4 * 12);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(24));
}

loc_80830D58:
{
    r8 = (r4 + 24);
    r6 = (r3 + r7);
    MemoryInline::FlatWrite32((r6 + 16), r5);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80830D7C;
    }
}

loc_80830D68:
{
    r0 = (r8 * 40);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r6 + 24), r0);
    goto loc_80830DA4;
}

loc_80830D7C:
{
    r0 = (r5 + -26);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80830D84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80830DA0;
    }
}

loc_80830D88:
{
    r0 = (r5 + -32);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80830D90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80830DA0;
    }
}

loc_80830D94:
{
    r0 = (r5 + -38);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80830D9C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80830DA4;
    }
}

loc_80830DA0:
{
    r8 = (r8 + 1);
}

loc_80830DA4:
{
    r0 = (r8 * 40);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + r7);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_80831038;
}

loc_80830DBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(24));
}

loc_80830DC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80830DEC;
    }
}

loc_80830DC4:
{
    r0 = (r4 * 12);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 16), r5);
    r0 = (r5 * 40);
    r31 = (r4 + 16);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r30 = (r4 + 24);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 24), r0);
    goto loc_8083102C;
}

loc_80830DEC:
{
}

loc_80830DF0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(127))) {
        goto loc_80830DFC;
    }
}

loc_80830DF4:
{
}

loc_80830DF8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(129))) {
        goto loc_80830E0C;
    }
}

loc_80830DFC:
{
}

loc_80830E00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(80))) {
        goto loc_80830E0C;
    }
}

loc_80830E04:
{
}

loc_80830E08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(78))) {
        goto loc_80830E14;
    }
}

loc_80830E0C:
{
    r0 = 0;
    goto loc_80830E18;
}

loc_80830E14:
{
    r0 = 1;
}

loc_80830E18:
{
    r6 = 0x809C0000u;
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r27 = (r27_rot_1 & -4);
    r6 = MemoryInline::FlatRead32((r6 + -10480));
    MemoryInline::FlatWrite8((r6 + 613), static_cast<uint8_t>(r0));
    r6 = MemoryInline::FlatRead32((r3 + 68));
    r6_addr_1 = (r6 + r27);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    r0 = MemoryInline::FlatRead32((r6 + 168));
}

loc_80830E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80830E50;
    }
}

loc_80830E3C:
{
}

loc_80830E40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80830E78;
    }
}

loc_80830E44:
{
}

loc_80830E48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80830EA0;
    }
}

loc_80830E4C:
{
    goto loc_80830EC8;
}

loc_80830E50:
{
    r0 = MemoryInline::FlatRead32((r6 + 156));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_80830E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80830E68;
    }
}

loc_80830E5C:
{
}

loc_80830E60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80830E70;
    }
}

loc_80830E64:
{
    goto loc_80830EC8;
}

loc_80830E68:
{
    r7 = 24;
    goto loc_80830ECC;
}

loc_80830E70:
{
    r7 = 25;
    goto loc_80830ECC;
}

loc_80830E78:
{
    r0 = MemoryInline::FlatRead32((r6 + 156));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_80830E80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80830E90;
    }
}

loc_80830E84:
{
}

loc_80830E88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80830E98;
    }
}

loc_80830E8C:
{
    goto loc_80830EC8;
}

loc_80830E90:
{
    r7 = 30;
    goto loc_80830ECC;
}

loc_80830E98:
{
    r7 = 31;
    goto loc_80830ECC;
}

loc_80830EA0:
{
    r0 = MemoryInline::FlatRead32((r6 + 156));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_80830EA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80830EB8;
    }
}

loc_80830EAC:
{
}

loc_80830EB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80830EC0;
    }
}

loc_80830EB4:
{
    goto loc_80830EC8;
}

loc_80830EB8:
{
    r7 = 36;
    goto loc_80830ECC;
}

loc_80830EC0:
{
    r7 = 37;
    goto loc_80830ECC;
}

loc_80830EC8:
{
    r7 = -1;
}

loc_80830ECC:
{
    r29 = (r4 * 12);
    r0 = (r5 + -26);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
}

loc_80830EDC:
{
    r31 = (r3 + r29);
    MemoryInline::FlatWrite32((r31 + 16), r7);
    r31 = (r31 + 16);
    r8 = (r4 + 24);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80830F04;
    }
}

loc_80830EEC:
{
    r0 = (r5 + -32);
}

loc_80830EF4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80830F04;
    }
}

loc_80830EF8:
{
    r0 = (r5 + -38);
}

loc_80830F00:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80830F18;
    }
}

loc_80830F04:
{
    r5 = (r3 + r29);
    r8 = (r8 + 1);
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r4 + 2);
    MemoryInline::FlatWrite32((r5 + 16), r0);
}

loc_80830F18:
{
    r28 = (r8 * 40);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r30 = (r3 + r29);
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r30 + 24), r0);
    r30 = (r30 + 24);
    r4 = MemoryInline::FlatRead32((r3 + 72));
    r4_addr_1 = (r4 + r27);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80830F38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083101C;
    }
}

loc_80830F3C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 0;
    r3 = (r0 + r28);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80830F5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r26 + 72));
    r4 = 0;
    r3_addr_1 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80830F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r26 + 72));
    r29 = (r26 + r29);
    r0 = MemoryInline::FlatRead32((r26 + 4));
    r4 = 5;
    r3_addr_2 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r5 = (r0 + r28);
    r6 = MemoryInline::FlatRead32((r29 + 16));
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 76));
    r6 = (r6 + -24);
    ctx->lr = 0x80830FA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807DC2D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r26 + 4));
    r4 = 5;
    r3 = MemoryInline::FlatRead32((r26 + 72));
    r7 = MemoryInline::FlatRead32((r26 + 68));
    r5 = (r0 + r28);
    r6 = MemoryInline::FlatRead32((r29 + 16));
    r3_addr_3 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r6 = (r6 + -24);
    r7_addr_1 = (r7 + r27);
    r7 = MemoryInline::FlatRead32(r7_addr_1);
    ctx->lr = 0x80830FD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807DC2C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r26 + 72));
    r4 = 0;
    r3_addr_4 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    ctx->lr = 0x80830FE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807DC3E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r26 + 4));
    r4 = 1;
    r3 = (r0 + r28);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80831000u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r26 + 72));
    r4 = 1;
    r3_addr_5 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8083101Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8083101C:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    MemoryInline::FlatWrite8((r3 + 613), static_cast<uint8_t>(r0));
}

loc_8083102C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r3 + 24), r0);
}

loc_80831038:
{
    r26 = MemoryInline::FlatRead32((r1 + 8));
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80830D00 func_80830D00 preserves=true fpr_mask=0x00000000
