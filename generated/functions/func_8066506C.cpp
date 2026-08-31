#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066506C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066506C;

loc_8066506C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r27 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = 0x80000000u;
    r5 = 274857984;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r5 = (r5 + 19923);
    r7 = MemoryInline::FlatRead32((r27 + 28));
    r30 = r4;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_0 & 1073741823);
    r6 = MemoryInline::FlatRead32((r27 + 24));
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r0)) >> 32));
    r4_subfc_min_0 = r4;
    r4 = (r4_subfc_min_0 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_0) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r31 = r3;
    r3_subfe_rb_0 = r3;
    r3_not_0 = ~(r6);
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r3_not_0 + r3_subfe_rb_0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_0 & 67108863);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021604u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(170));
}

loc_806650C4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806651A0;
    }
}

loc_806650C8:
{
    r4 = MemoryInline::FlatRead8((r27 + 16));
    r3 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r3 + 8408));
    r0 = 12;
    r3 = (r4 + 1);
    r28 = (r3 & 255);
    r3 = 1;
    ctr = r0;
}

loc_806650E8:
{
    r0 = (r28 & 255);
}

loc_806650F0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(12))) {
        goto loc_806650F8;
    }
}

loc_806650F4:
{
    r28 = 0;
}

loc_806650F8:
{
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r4 = (r28 & 255);
    r29 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r0 = (r0 * 88);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 72));
    r0 = (r29 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80665120;
    }
}

loc_80665118:
{
    r28 = (r28 + 1);
    goto loc_8066519C;
}

loc_80665120:
{
    r0 = MemoryInline::FlatRead8((r5 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80665128:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80665134;
    }
}

loc_8066512C:
{
    r28 = (r28 + 1);
    goto loc_8066519C;
}

loc_80665134:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8456));
    ctx->lr = 0x80665140u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80662ABCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80665148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066518C;
    }
}

loc_8066514C:
{
    r0 = MemoryInline::FlatRead32((r27 + 12));
    r0 = (r0 & r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80665174;
    }
}

loc_80665158:
{
    r3 = r27;
    r4 = (r28 & 255);
    ctx->lr = 0x80665164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80665480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 12));
    r0 = (r0 & ~r29);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_8066518C;
}

loc_80665174:
{
    r0 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r0 & r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066518C;
    }
}

loc_80665180:
{
    r3 = r27;
    r4 = (r28 & 255);
    ctx->lr = 0x8066518Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806653C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066518C:
{
    MemoryInline::FlatWrite8((r27 + 16), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite32((r27 + 28), r30);
    MemoryInline::FlatWrite32((r27 + 24), r31);
    goto loc_806651A0;
}

loc_8066519C:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806650E8;
    }
}

loc_806651A0:
{
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800067B gpr_write=0xF80007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8066506C func_8066506C preserves=true fpr_mask=0x00000000
