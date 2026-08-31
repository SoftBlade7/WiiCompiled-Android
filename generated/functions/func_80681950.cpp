#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80681950(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsux_80681AC4_loc_0 = 0;
    uint32_t addr_lfsux_80681B0C_loc_0 = 0;
    uint32_t addr_lfsux_80681B4C_loc_0 = 0;
    uint32_t addr_lfsux_80681BA8_loc_0 = 0;
    uint32_t addr_lfsux_80681C0C_loc_0 = 0;
    uint32_t addr_lfsux_80681C50_loc_0 = 0;
    uint32_t addr_lfsux_80681C88_loc_0 = 0;
    uint32_t addr_stfsx_80681A60_loc_0 = 0;
    uint32_t addr_stfsx_80681DB4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80681950;

loc_80681950:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = r3;
    r29 = 0;
    goto loc_80681A88;
}

loc_80681970:
{
    r31 = (r29 + 1);
    r28 = 0;
    r30 = 0;
    goto loc_80681A78;
}

loc_80681980:
{
    r0 = (r3 + 1);
    r8 = MemoryInline::FlatRead32((r27 + 172));
    r5 = (r0 * r31);
    r4 = r27;
    r3 = (r1 + 80);
    r6 = (r0 * r29);
    r5 = (r28 + r5);
    r0 = (r5 + 1);
    r6 = (r28 + r6);
    r7 = (r6 * 12);
    r6 = (r5 * 12);
    r5 = (r8 + r7);
    r0 = (r0 * 12);
    r6 = (r8 + r6);
    r7 = (r8 + r0);
    ctx->lr = 0x806819C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80681E24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r27 + 216));
    r4 = r27;
    r5 = MemoryInline::FlatRead32((r27 + 180));
    r3 = (r1 + 68);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r0 = (r29 * r0);
    r0 = (r30 + r0);
    r0 = (r0 * 12);
    r5 = (r5 + r0);
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
    r5 = MemoryInline::FlatRead32((r27 + 216));
    r8 = MemoryInline::FlatRead32((r27 + 172));
    r0 = (r5 + 1);
    r5 = (r0 * r29);
    r6 = (r28 + r5);
    r5 = (r0 * r31);
    r0 = (r6 + 1);
    r5 = (r28 + r5);
    r5 = (r5 + 1);
    r7 = (r6 * 12);
    r6 = (r5 * 12);
    r5 = (r8 + r7);
    r0 = (r0 * 12);
    r6 = (r8 + r6);
    r7 = (r8 + r0);
    ctx->lr = 0x80681A38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80681E24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r27 + 216));
    r28 = (r28 + 1);
    r4 = MemoryInline::FlatRead32((r27 + 180));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    r0 = (r29 * r0);
    r3 = (r30 + r0);
    r30 = (r30 + 2);
    r0 = (r3 + 1);
    r0 = (r0 * 12);
    addr_stfsx_80681A60_loc_0 = (r4 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80681A60_loc_0, f0.d);
    r3 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
}

loc_80681A78:
{
    r3 = MemoryInline::FlatRead32((r27 + 216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r3));
}

loc_80681A80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80681980;
    }
}

loc_80681A84:
{
    r29 = (r29 + 1);
}

loc_80681A88:
{
    r0 = MemoryInline::FlatRead32((r27 + 220));
}

loc_80681A90:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_80681970;
    }
}

loc_80681A94:
{
    r3 = 1;
    goto loc_80681B28;
}

loc_80681A9C:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r27 + 216));
    r6 = (r3 + -1);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r27 + 180));
    r5 = (r3 + 1);
    r0 = (r8 + 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r0 = (r0 * r3);
    r6 = (r6 * r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r27 + 188));
    r6 = (r6 * 12);
    addr_lfsux_80681AC4_loc_0 = (r6 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsux_80681AC4_loc_0);
    r6 = addr_lfsux_80681AC4_loc_0;
    r0 = (r0 * 12);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r27 + 216));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r27 + 180));
    r0 = (r8 + 1);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r0 = (r0 * r3);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r27 + 188));
    r3 = (r3 + 1);
    r5 = (r6 * r5);
    r0 = (r8 + r0);
    r5 = (r5 + -1);
    r5 = (r5 * 12);
    addr_lfsux_80681B0C_loc_0 = (r5 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsux_80681B0C_loc_0);
    r5 = addr_lfsux_80681B0C_loc_0;
    r0 = (r0 * 12);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
}

loc_80681B28:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 180), 0, 60u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r27 + 220));
}

loc_80681B30:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80681A9C;
    }
}

loc_80681B34:
{
    r10 = 1;
    r3 = 12;
    r8 = 12;
    goto loc_80681BC4;
}

loc_80681B44:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r27 + 180));
    r0 = (r10 + -1);
    addr_lfsux_80681B4C_loc_0 = (r5 + r3);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsux_80681B4C_loc_0);
    r5 = addr_lfsux_80681B4C_loc_0;
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_4 & -2);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r27 + 188));
    r3 = (r3 + 24);
    r4 = (r4 + r8);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    r8 = (r8 + 12);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r27 + 216));
            r9 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r27 + 220));
        }
    }
    r0 = (r5 + 1);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & -2);
    r0 = (r9 * r0);
    r5 = (r9 + -1);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r27 + 180));
    r5 = (r5 * r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r27 + 188));
    r0 = (r10 + r0);
    r10 = (r10 + 1);
    r5 = (r6 + r5);
    r5 = (r5 * 12);
    addr_lfsux_80681BA8_loc_0 = (r5 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsux_80681BA8_loc_0);
    r5 = addr_lfsux_80681BA8_loc_0;
    r0 = (r0 * 12);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
}

loc_80681BC4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r27 + 216));
}

loc_80681BCC:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r0))) {
        goto loc_80681B44;
    }
}

loc_80681BD0:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r27 + 180));
    r28 = 1;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r27 + 188));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r27 + 216));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r27 + 180));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & -2);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r27 + 188));
    r0 = (r4 + -1);
    r4 = (r0 * 12);
    addr_lfsux_80681C0C_loc_0 = (r4 + r5);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsux_80681C0C_loc_0);
    r4 = addr_lfsux_80681C0C_loc_0;
    r0 = (r6 * 12);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r27 + 216));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r27 + 220));
        }
    }
    r0 = (r3 + 1);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    r0 = (r0 * r6);
    r4 = (r6 + -1);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r27 + 180));
    r4 = (r4 * r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r27 + 188));
    r4 = (r4 * 12);
    addr_lfsux_80681C50_loc_0 = (r4 + r5);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsux_80681C50_loc_0);
    r4 = addr_lfsux_80681C50_loc_0;
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 52u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r27 + 232));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r27 + 236));
        }
    }
    r0 = (r4 + -1);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r27 + 180));
    r4 = (r0 * 12);
    r0 = (r3 + -1);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r27 + 188));
    addr_lfsux_80681C88_loc_0 = (r4 + r5);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsux_80681C88_loc_0);
    r4 = addr_lfsux_80681C88_loc_0;
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    goto loc_80681E00;
}

loc_80681CA8:
{
    r31 = (r28 + -1);
    r29 = 1;
    goto loc_80681DF0;
}

loc_80681CB4:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = (r29 + -1);
    r0 = (r31 * r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 180), 0, 40u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r27 + 180));
    r30_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r30 = (r30_rot_3 & -2);
    r3 = (r1 + 56);
    r4 = (r30 + r0);
    r0 = (r4 + 1);
    r4 = (r4 * 12);
    r0 = (r0 * 12);
    r4 = (r5 + r4);
    r5 = (r5 + r0);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r27 + 216));
    r3 = (r1 + 44);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r27 + 180));
    r4 = (r1 + 56);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r0 = (r31 * r0);
    r5 = (r30 + r0);
    r0 = (r5 + 2);
    r0 = (r0 * 12);
    r5 = (r6 + r0);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r27 + 216));
    r3 = (r1 + 32);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r27 + 180));
    r4 = (r1 + 44);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r0 = (r0 * r28);
    r5 = (r30 + r0);
    r0 = (r5 + 1);
    r0 = (r0 * 12);
    r5 = (r6 + r0);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r27 + 216));
    r3 = (r1 + 20);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r27 + 180));
    r4 = (r1 + 32);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r0 = (r0 * r28);
    r5 = (r30 + r0);
    r0 = (r5 + 2);
    r0 = (r0 * 12);
    r5 = (r6 + r0);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r27 + 216));
    r3 = (r1 + 8);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r27 + 180));
    r4 = (r1 + 20);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r0 = (r0 * r28);
    r5 = (r30 + r0);
    r0 = (r5 + 3);
    r0 = (r0 * 12);
    r5 = (r6 + r0);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r27 + 216));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r27 + 188));
    r0 = (r3 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r0 = (r0 * r28);
    r0 = (r29 + r0);
    r0 = (r0 * 12);
    addr_stfsx_80681DB4_loc_0 = (r4 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80681DB4_loc_0, f0.d);
    r3 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r27 + 216));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r27 + 188));
    r0 = (r3 + 1);
    r0 = (r0 * r28);
    r0 = (r29 + r0);
    r0 = (r0 * 12);
    r3 = (r4 + r0);
    ctx->lr = 0x80681DECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r29 = (r29 + 1);
}

loc_80681DF0:
{
    r0 = MemoryInline::FlatRead32((r27 + 216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_80681DF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80681CB4;
    }
}

loc_80681DFC:
{
    r28 = (r28 + 1);
}

loc_80681E00:
{
    r0 = MemoryInline::FlatRead32((r27 + 220));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_80681E08:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80681CA8;
    }
}

loc_80681E0C:
{
    r11 = (r1 + 128);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80007FF gpr_write=0xF8000FFB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80681950 func_80681950 preserves=true fpr_mask=0x00000000
