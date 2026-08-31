#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A28B0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A28B0;

loc_800A28B0:
{
    MemoryInline::FlatWriteRam32((r1 + -576), r1);
    r1 = (r1 + -576);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    MemoryInline::FlatWriteRam32((r1 + 572), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 568), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 564), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 560), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_800A28E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A28F0;
    }
}

loc_800A28E8:
{
    r3 = 0;
    goto loc_800A28F8;
}

loc_800A28F0:
{
    r3 = r0;
    // inline leaf 0x8009DE70 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8009DE70
}

loc_800A28F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A28FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A2908;
    }
}

loc_800A2900:
{
    r3 = 0;
    goto loc_800A29F8;
}

loc_800A2908:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    ctx->lr = 0x800A2910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DED0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r3));
}

loc_800A2914:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A2920;
    }
}

loc_800A2918:
{
    r3 = 0;
    goto loc_800A29F8;
}

loc_800A2920:
{
    r3 = MemoryInline::FlatRead32((r28 + 20));
}

loc_800A2928:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A2934;
    }
}

loc_800A292C:
{
    r0 = 0;
    goto loc_800A2954;
}

loc_800A2934:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_800A293C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_800A2948;
    }
}

loc_800A2940:
{
    r0 = 0;
    goto loc_800A2954;
}

loc_800A2948:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800A2954:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A2958:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A2964;
    }
}

loc_800A295C:
{
    r3 = 1;
    goto loc_800A29F8;
}

loc_800A2964:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800A2968:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A2974;
    }
}

loc_800A296C:
{
    r3 = 0;
    goto loc_800A29F8;
}

loc_800A2974:
{
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r3 = (r1 + 16);
    ctx->lr = 0x800A2980u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8009F990u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    r4 = r29;
    r5 = r30;
    r7 = r31;
    r3 = (r1 + 16);
    r6 = (r1 + 8);
    ctx->lr = 0x800A2998u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009FA10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A299C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A29B4;
    }
}

loc_800A29A0:
{
    r3 = (r1 + 16);
    r4 = -1;
    ctx->lr = 0x800A29ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009F9D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_800A29F8;
}

loc_800A29B4:
{
    r4 = MemoryInline::FlatRead32((r28 + 20));
}

loc_800A29BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800A29CC;
    }
}

loc_800A29C0:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
}

loc_800A29CC:
{
    r3 = MemoryInline::FlatRead32((r28 + 20));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A29D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A29E8;
    }
}

loc_800A29DC:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_800A29E8:
{
    r3 = (r1 + 16);
    r4 = -1;
    ctx->lr = 0x800A29F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009F9D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
}

loc_800A29F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 580));
    r31 = MemoryInline::FlatRead32((r1 + 572));
    r30 = MemoryInline::FlatRead32((r1 + 568));
    r29 = MemoryInline::FlatRead32((r1 + 564));
    r28 = MemoryInline::FlatRead32((r1 + 560));
    ctx->lr = r0;
    r1 = (r1 + 576);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800A28B0 func_800A28B0 preserves=true fpr_mask=0x00000000
