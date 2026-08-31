#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80812B80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80812B80;

loc_80812B80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x80812B98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = (r31 + 88);
    r4 = (r31 + 188);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FABCu>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = r31;
    ctx->lr = 0x80812BACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 88), 0, 252u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r31 + 172));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 88));
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 96u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 116));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 120));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 124));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r3 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r31 + 188));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, (r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r31 + 192));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r31 + 196));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r3 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r31 + 200));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r3 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r31 + 204));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 64u, (r3 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r31 + 208));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 68u, (r3 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 124u, (r31 + 212));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, (r3 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 216));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r3 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 132u, (r31 + 220));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, (r3 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r31 + 224));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 84u, (r3 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r31 + 228));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r3 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r31 + 232));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, (r3 + 96), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 248u, (r31 + 336));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80812C78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80812D48;
    }
}

loc_80812C7C:
{
    r3 = r31;
    ctx->lr = 0x80812C84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 88), 0, 252u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 248u, (r31 + 336));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 88));
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 96u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r31 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r31 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r3 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r31 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r31 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r31 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r31 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r3 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r31 + 116));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r31 + 120));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r31 + 124));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r3 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r31 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 40u, (r3 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r31 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 100u, (r31 + 188));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 48u, (r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 104u, (r31 + 192));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 52u, (r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 108u, (r31 + 196));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 56u, (r3 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 112u, (r31 + 200));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 60u, (r3 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 116u, (r31 + 204));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 64u, (r3 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 120u, (r31 + 208));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 68u, (r3 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 124u, (r31 + 212));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 72u, (r3 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 128u, (r31 + 216));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 76u, (r3 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 132u, (r31 + 220));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 80u, (r3 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 136u, (r31 + 224));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 84u, (r3 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 140u, (r31 + 228));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 88u, (r3 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 144u, (r31 + 232));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 92u, (r3 + 96), f0.d);
}

loc_80812D48:
{
    r0 = MemoryInline::FlatRead32((r31 + 340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80812D50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80812E34;
    }
}

loc_80812D54:
{
    r3 = MemoryInline::FlatRead32((r31 + 160));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80812D64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80812E34;
    }
}

loc_80812D68:
{
    r3 = r31;
    ctx->lr = 0x80812D70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 88), 0, 256u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 252u, (r31 + 340));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r31 + 88));
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 96u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r31 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r31 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r3 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r31 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r31 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r31 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r31 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 24u, (r3 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r31 + 116));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r31 + 120));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r31 + 124));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r3 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r31 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r3 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r31 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 44u, (r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 100u, (r31 + 188));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 48u, (r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 104u, (r31 + 192));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 52u, (r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 108u, (r31 + 196));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 56u, (r3 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 112u, (r31 + 200));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 60u, (r3 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 116u, (r31 + 204));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 64u, (r3 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 120u, (r31 + 208));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 68u, (r3 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 124u, (r31 + 212));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 72u, (r3 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 128u, (r31 + 216));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 76u, (r3 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 132u, (r31 + 220));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 80u, (r3 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 136u, (r31 + 224));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 84u, (r3 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 140u, (r31 + 228));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 88u, (r3 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 144u, (r31 + 232));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 92u, (r3 + 96), f0.d);
}

loc_80812E34:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003F gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0xFC003F9F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80812B80 func_80812B80 preserves=true fpr_mask=0x00000000
