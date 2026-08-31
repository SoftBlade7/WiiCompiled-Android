#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_807030A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807030A4;

loc_807030A4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 5800);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r0 = MemoryInline::FlatRead8((r3 + 177));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807030E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807030F0;
    }
}

loc_807030E8:
{
    r3 = 0;
    goto loc_8070349C;
}

loc_807030F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(205));
}

loc_807030F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703130;
    }
}

loc_807030FC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(571));
}

loc_80703100:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703130;
    }
}

loc_80703104:
{
    r4 = 1431633920;
    r5 = MemoryInline::FlatRead16((r3 + 164));
    r0 = (r4 + 21846);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 3);
    r0 = (r5 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703130;
    }
}

loc_80703128:
{
    r3 = 0;
    goto loc_8070349C;
}

loc_80703130:
{
    r3 = (r3 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_DB5 = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_DB5[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_DB5[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x807028E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8070313C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80703148;
    }
}

loc_80703140:
{
    r28 = 0;
    goto loc_80703304;
}

loc_80703148:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 128), 0, 16u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 128));
    r28 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703154:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703178;
    }
}

loc_80703158:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703164;
    }
}

loc_8070315C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80703168;
}

loc_80703164:
{
    r0 = -1;
}

loc_80703168:
{
}

loc_8070316C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80703178;
    }
}

loc_80703170:
{
    r28 = (r29 + 128);
    goto loc_807031F8;
}

loc_80703178:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703180:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807031A4;
    }
}

loc_80703184:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703190;
    }
}

loc_80703188:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80703194;
}

loc_80703190:
{
    r0 = -1;
}

loc_80703194:
{
}

loc_80703198:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_807031A4;
    }
}

loc_8070319C:
{
    r28 = (r29 + 132);
    goto loc_807031F8;
}

loc_807031A4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807031AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807031D0;
    }
}

loc_807031B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807031BC;
    }
}

loc_807031B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807031C0;
}

loc_807031BC:
{
    r0 = -1;
}

loc_807031C0:
{
}

loc_807031C4:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_807031D0;
    }
}

loc_807031C8:
{
    r28 = (r29 + 136);
    goto loc_807031F8;
}

loc_807031D0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807031D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807031F8;
    }
}

loc_807031DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807031E8;
    }
}

loc_807031E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807031EC;
}

loc_807031E8:
{
    r0 = -1;
}

loc_807031EC:
{
}

loc_807031F0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_807031F8;
    }
}

loc_807031F4:
{
    r28 = (r29 + 140);
}

loc_807031F8:
{
}

loc_807031FC:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_807032E0;
    }
}

loc_80703200:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703208:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703214;
    }
}

loc_8070320C:
{
    r28 = (r29 + 128);
    goto loc_807032E0;
}

loc_80703214:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703220;
    }
}

loc_80703218:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80703224;
}

loc_80703220:
{
    r0 = -1;
}

loc_80703224:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703230:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070323C;
    }
}

loc_80703234:
{
    r28 = (r29 + 132);
    goto loc_807032E0;
}

loc_8070323C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703248;
    }
}

loc_80703240:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070324C;
}

loc_80703248:
{
    r0 = -1;
}

loc_8070324C:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703258:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703264;
    }
}

loc_8070325C:
{
    r28 = (r29 + 136);
    goto loc_807032E0;
}

loc_80703264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703270;
    }
}

loc_80703268:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80703274;
}

loc_80703270:
{
    r0 = -1;
}

loc_80703274:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703280:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070328C;
    }
}

loc_80703284:
{
    r28 = (r29 + 140);
    goto loc_807032E0;
}

loc_8070328C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703298;
    }
}

loc_80703290:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070329C;
}

loc_80703298:
{
    r0 = -1;
}

loc_8070329C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r30;
    r3 = (r29 + 148);
    r5 = (r1 + 8);
    r6 = 4;
    ctx->lr = 0x807032B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80702848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_807032B8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_807032C4;
    }
}

loc_807032BC:
{
    r28 = 0;
    goto loc_807032E0;
}

loc_807032C4:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r28 = (r29 + r0);
    r28 = (r28 + 128);
    r3 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807032D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807032E0;
    }
}

loc_807032D8:
{
    r4 = 0;
    ctx->lr = 0x807032E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807032E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807032E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703300;
    }
}

loc_807032E8:
{
    r3 = r29;
    r4 = r28;
    r5 = r30;
    r6 = 0;
    ctx->lr = 0x807032FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A3F90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80703304;
}

loc_80703300:
{
    r28 = 0;
}

loc_80703304:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80703308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703498;
    }
}

loc_8070330C:
{
    r0 = MemoryInline::FlatRead16((r29 + 156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(419));
}

loc_80703314:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703498;
    }
}

loc_80703318:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80703320:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80703340;
    }
}

loc_80703324:
{
    r3 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070332C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703498;
    }
}

loc_80703330:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_80703498;
}

loc_80703340:
{
    r4 = MemoryInline::FlatRead32((r29 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070334C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703370;
    }
}

loc_80703350:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070335C;
    }
}

loc_80703354:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80703360;
}

loc_8070335C:
{
    r0 = -1;
}

loc_80703360:
{
}

loc_80703364:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(640))) {
        goto loc_80703370;
    }
}

loc_80703368:
{
    r3 = (r29 + 128);
    goto loc_807033F0;
}

loc_80703370:
{
    r4 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80703378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070339C;
    }
}

loc_8070337C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703388;
    }
}

loc_80703380:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070338C;
}

loc_80703388:
{
    r0 = -1;
}

loc_8070338C:
{
}

loc_80703390:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(640))) {
        goto loc_8070339C;
    }
}

loc_80703394:
{
    r3 = (r29 + 132);
    goto loc_807033F0;
}

loc_8070339C:
{
    r4 = MemoryInline::FlatRead32((r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807033A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807033C8;
    }
}

loc_807033A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807033B4;
    }
}

loc_807033AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807033B8;
}

loc_807033B4:
{
    r0 = -1;
}

loc_807033B8:
{
}

loc_807033BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(640))) {
        goto loc_807033C8;
    }
}

loc_807033C0:
{
    r3 = (r29 + 136);
    goto loc_807033F0;
}

loc_807033C8:
{
    r4 = MemoryInline::FlatRead32((r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807033D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807033F0;
    }
}

loc_807033D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807033E0;
    }
}

loc_807033D8:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807033E4;
}

loc_807033E0:
{
    r0 = -1;
}

loc_807033E4:
{
}

loc_807033E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(640))) {
        goto loc_807033F0;
    }
}

loc_807033EC:
{
    r3 = (r29 + 140);
}

loc_807033F0:
{
}

loc_807033F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80703428;
    }
}

loc_807033F8:
{
    r3 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703410;
    }
}

loc_80703404:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80703410:
{
    r3 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703498;
    }
}

loc_8070341C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
    goto loc_80703498;
}

loc_80703428:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80703430:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80703464;
    }
}

loc_80703434:
{
    r3 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070343C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070344C;
    }
}

loc_80703440:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_8070344C:
{
    r3 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703454:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703498;
    }
}

loc_80703458:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
    goto loc_80703498;
}

loc_80703464:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703498;
    }
}

loc_8070346C:
{
    r3 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703474:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703484;
    }
}

loc_80703478:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80703484:
{
    r3 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070348C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703498;
    }
}

loc_80703490:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
}

loc_80703498:
{
    r3 = r28;
}

loc_8070349C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807030A4 func_807030A4 preserves=false fpr_mask=0x80000000
