#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80093A70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80093A70;

loc_80093A70:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 20u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -28512), 0, 16u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28508));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_80093A90:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 28), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80093AC4;
    }
}

loc_80093AC0:
{
    goto loc_80093AC8;
}

loc_80093AC4:
{
    f5.d = f1.d;
}

loc_80093AC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_80093AD0:
{
    r0 = cr;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWriteFloat32((r3 + 200), f5.d);
    r30 = (r0 ^ 1);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80093AEC:
{
    MemoryInline::FlatWriteFloat32((r3 + 104), f5.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80093AF8;
    }
}

loc_80093AF4:
{
    goto loc_80093B0C;
}

loc_80093AF8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28508));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80093B00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80093B08;
    }
}

loc_80093B04:
{
    goto loc_80093B0C;
}

loc_80093B08:
{
    f1.d = f0.d;
}

loc_80093B0C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -28504));
    MemoryInline::FlatWriteFloat32((r3 + 204), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80093B1C:
{
    MemoryInline::FlatWriteFloat32((r3 + 108), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80093B28;
    }
}

loc_80093B24:
{
    goto loc_80093B3C;
}

loc_80093B28:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -28500));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80093B30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80093B38;
    }
}

loc_80093B34:
{
    goto loc_80093B3C;
}

loc_80093B38:
{
    f2.d = f0.d;
}

loc_80093B3C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28512));
    MemoryInline::FlatWriteFloat32((r3 + 208), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80093B4C:
{
    MemoryInline::FlatWriteFloat32((r3 + 112), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80093B58;
    }
}

loc_80093B54:
{
    goto loc_80093B6C;
}

loc_80093B58:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -28500));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80093B60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80093B68;
    }
}

loc_80093B64:
{
    goto loc_80093B6C;
}

loc_80093B68:
{
    f1.d = f0.d;
}

loc_80093B6C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28512));
    MemoryInline::FlatWriteFloat32((r3 + 212), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80093B7C:
{
    MemoryInline::FlatWriteFloat32((r3 + 116), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80093B88;
    }
}

loc_80093B84:
{
    goto loc_80093B9C;
}

loc_80093B88:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -28500));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80093B90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80093B98;
    }
}

loc_80093B94:
{
    goto loc_80093B9C;
}

loc_80093B98:
{
    f2.d = f0.d;
}

loc_80093B9C:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r4 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -28500));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80093BAC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 120), 0, 112u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 104u, (r3 + 224), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 128), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + 120), r4);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 124), r4);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 132), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r3 + 216), r4);
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r3 + 220), r4);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 108u, (r3 + 228), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80093BD8;
    }
}

loc_80093BD0:
{
    r3 = 1;
    goto loc_80093CB0;
}

loc_80093BD8:
{
    r3 = (r3 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8012A154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = (r3 + 135);
    r3 = (r29 + 136);
    r31 = (r0 & -32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8012ABDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = (r3 + 135);
    r3 = (r0 & -32);
}

loc_80093BFC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r31))) {
        goto loc_80093C04;
    }
}

loc_80093C00:
{
    r3 = r31;
}

loc_80093C04:
{
    r4 = MemoryInline::FlatRead32((r29 + 20));
}

loc_80093C0C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80093C18;
    }
}

loc_80093C10:
{
    r0 = 0;
    goto loc_80093C20;
}

loc_80093C18:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r0 - r4);
}

loc_80093C20:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80093C24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80093C30;
    }
}

loc_80093C28:
{
    r3 = 0;
    goto loc_80093CB0;
}

loc_80093C30:
{
}

loc_80093C34:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80093C80;
    }
}

loc_80093C38:
{
    r3 = (r29 + 20);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x80093C48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8008D1E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r0 = MemoryInline::FlatRead32((r29 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80093C50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80093C60;
    }
}

loc_80093C54:
{
    r3 = (r29 + 136);
    ctx->lr = 0x80093C5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012AE28u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80093C68;
}

loc_80093C60:
{
    r3 = (r29 + 48);
    ctx->lr = 0x80093C68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012A440u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80093C68:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r29 + 20);
    ctx->lr = 0x80093C7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8008D240u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    goto loc_80093CA4;
}

loc_80093C80:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80093C88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80093C98;
    }
}

loc_80093C8C:
{
    r3 = (r29 + 136);
    ctx->lr = 0x80093C94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012AF4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80093CA0;
}

loc_80093C98:
{
    r3 = (r29 + 48);
    ctx->lr = 0x80093CA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012A5C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80093CA0:
{
    r30 = r3;
}

loc_80093CA4:
{
    r0 = (0 - r30);
    r0 = (r0 | r30);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_80093CB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80093A70 func_80093A70 preserves=true fpr_mask=0x00000000
