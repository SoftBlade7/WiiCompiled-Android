#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013118C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013118C;

loc_8013118C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80330000u;
    r31 = (r30 + 9440);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r0 = MemoryInline::FlatRead8((r31 + 41));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_801311BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80131274;
    }
}

loc_801311C0:
{
    r0 = MemoryInline::FlatRead8((r31 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_801311C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80131274;
    }
}

loc_801311CC:
{
    r0 = MemoryInline::FlatRead8((r31 + 29));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_801311D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801311DC;
    }
}

loc_801311D8:
{
    goto loc_80131274;
}

loc_801311DC:
{
    ctx->lr = 0x801311E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80130288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = 2;
    MemoryInline::FlatWriteRam32((r31 + 32), r28);
    MemoryInline::FlatWriteRam8((r31 + 41), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctx->lr = 0x801311F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130CECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801311F4:
{
    r3 = MemoryInline::FlatRead8((r31 + 29));
    ctx->lr = 0x801311FCu;
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
    InvokeDirectCpu<0x8012ED54u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80131200:
{
    r28 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801311F4;
    }
}

loc_80131208:
{
    r4 = 4352;
    r0 = (r3 + 39);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
    r4 = 0;
    r29 = (r0 & -32);
    r0 = (r3 + 8);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r0 = (r29 - r0);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    // inline leaf 0x8012EFAC (17 guest instruction(s))
}

loc_inl0_0x8012EFAC:
{
    r3 = (r3 + -8);
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x8012EFB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x8012EFC0;
    }
}

loc_inl0_0x8012EFB8:
{
    r3 = 0;
    goto loc_inl0_cont_8012EFAC;
}

loc_inl0_0x8012EFC0:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_inl0_0x8012EFC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x8012EFE8;
    }
}

loc_inl0_0x8012EFCC:
{
    r3 = 0x80310000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r3 = (r3 + -26176);
    r3 = (r3 + 196608);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + -30232));
    goto loc_inl0_cont_8012EFAC;
}

loc_inl0_0x8012EFE8:
{
    r3 = 0;
}

loc_inl0_cont_8012EFAC:
{
    // end of inlined leaf 0x8012EFAC
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead16((r28 + 4));
    r5 = (r3 + -40);
    r7 = 0x80130000u;
    r3 = MemoryInline::FlatRead32((r30 + 9440));
    r6 = r29;
    r4 = MemoryInline::FlatRead8((r31 + 17));
    r8 = r28;
    r5 = (r5 - r0);
    r7 = (r7 + 2896);
    ctx->lr = 0x8013125Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B8038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80131260:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013126C;
    }
}

loc_80131264:
{
    r3 = r28;
    ctx->lr = 0x8013126Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8013126C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -29680), r0);
}

loc_80131274:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF1FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013118C func_8013118C preserves=true fpr_mask=0x00000000
